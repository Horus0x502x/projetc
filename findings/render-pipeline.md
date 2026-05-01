# Pipeline de rendu IW4 / D3D9

Documentation de la pipeline de rendu graphique du moteur IW4. Le moteur utilise
**DirectX 9** sur Windows (et donc traduit par `wined3d` → OpenGL/Vulkan sous Wine).

## Vue d'ensemble

```
Game thread (Com_Frame)
    └─> R_BeginFrame
        └─> R_AddCmd*  (queue commands : DrawText, DrawStretchPic, Mesh, etc.)
            └─> RB_*  (Render Backend : exécute les commands)
                └─> D3D9Device->Draw*  (calls DirectX)
                    └─> D3D9Device->EndScene + Present
```

Note Wine : `IDirect3DDevice9::EndScene` et `Present` sont des **méthodes
virtuelles** de l'objet COM `IDirect3DDevice9`. Sous Wine, l'implémentation
est dans `wined3d.dll` chargé à `0x07440000` (cf. carte mémoire phase 2).

## Fonctions R_* identifiées dans iw4x.exe

| Adresse | Nom | Taille | Callers | Rôle |
|---|---|---|---|---|
| `0x004f84c0` | **`R_Init`** | 151 | 8 | Init pipeline rendu |
| `0x005196c0` | **`R_RegisterDvars`** | 6 930 | 2 | Enregistre tous les dvars rendering (`r_*`) |
| `0x00509d80` | **`R_AddCmdDrawText`** | 303 | 10 | Queue dessin de texte (HUD) |
| `0x00509770` | **`R_AddCmdDrawStretchPic`** | 257 | 11 | Queue dessin d'image étirée (UI/HUD) |
| `0x00534ea0` | **`RB_DrawCursor`** | 185 | 2 | Render backend : dessine le curseur |
| `0x0053dc10` | `R_SortWorldSurfaces` | 435 | 2 | Tri Z des surfaces (depth ordering) |
| `0x00506ac0` | `R_LoadGraphicsAssets` | 276 | 1 | Charge assets graphiques |
| `0x0051c5b0` | `R_Cinematic_StartPlayback_Now` | 318 | 1 | Cinématiques (videos .bik) |
| `0x005056c0` | `R_TextWidth` | 162 | 29 | Mesure largeur de texte |
| `0x004eb8b0`, ... | `R_RegisterFont` | 5-21 | ... | Charge une police |
| `0x0053fb50` | `R_FlushSun` | 165 | 1 | Effets soleil (flares, etc.) |
| `0x0051e7a0` | `R_AllocStaticIndexBuffer` | 99 | 4 | Alloue index buffer GPU |

## Stack DirectX9 sous Wine (carte mémoire runtime)

| Module | Base RAM | Rôle |
|---|---|---|
| `d3d9.dll` (PE Wine) | `0x6f1c0000` | Headers/import D3D9 (stub Wine) |
| `wined3d.dll` (PE Wine) | `0x07440000` | Vraie implémentation D3D9 → OpenGL |
| `d3dx9_43.dll` (PE Wine) | `0x07240000` | Helper functions D3DX9 (math, textures) |
| `opengl32.dll` (PE Wine) | `0x7a800000` | OpenGL stub Wine |
| `libvulkan_asahi.so` (ELF) | `0x70538000` | Vulkan natif (présent mais probablement inactif) |

## Hook EndScene / Present — points d'entrée

`EndScene` et `Present` sont appelés à chaque frame **par le moteur**, juste avant
de "swap" le frame buffer. Sous Wine, ils sont dans `wined3d.dll`.

### Méthode 1 : hook côté wined3d (ELF Linux)

`wined3d.dll` est mappé en RAM à `0x07440000`. On peut chercher les exports :

```bash
# Outil rapide pour lister les exports d'un module Wine
.venv/bin/python3 scripts/python/findstr.py <PID> 'IDirect3DDevice9' --module wined3d.dll
```

### Méthode 2 : hook côté moteur (iw4x.exe)

Plus stable : trouver dans `iw4x.exe` la fonction qui APPELLE `EndScene`. Elle
sera typiquement appelée depuis `R_PresentScene` ou similaire (pattern Q3 :
`RB_EndSurface` puis `R_RenderFrame` puis `Backend swap`).

À chercher dans Ghidra : `objdump -d targets/iw4x.exe | grep -E "call.*0x6f1c"`
pour les calls vers d3d9.dll. Mais comme c'est virtuel, on verra plutôt :

```asm
mov  eax, [edx]            ; charger vtable
call dword ptr [eax+0xA8]  ; offset 0xA8 = EndScene dans IDirect3DDevice9
call dword ptr [eax+0x44]  ; offset 0x44 = Present
```

(offsets vtable IDirect3DDevice9 standard, documentés Microsoft)

## Cas d'usage légitimes du hook EndScene

- **Recording de demo / capture vidéo personnelle** : intercepter le buffer
  avant Present pour le compresser
- **Profiling perf** : mesurer le frame time entre EndScene et Present
- **Outils de modding** : afficher des debug primitives en single-player
- **FRAPS-like** : compteur de FPS overlayé
- **Discord overlay / Steam overlay** : tous fonctionnent comme ça

## R_AddCmdDrawText — exemple concret

`R_AddCmdDrawText` (`0x00509d80`) ajoute une primitive de texte à la queue de
rendering. Signature probable (Q3 standard) :

```c
void R_AddCmdDrawText(
    const char* text,
    int maxChars,
    Font_s* font,
    float x, float y,
    float xScale, float yScale,
    float rotation,
    const float color[4],
    int style
);
```

Hooker cette fonction permet de **logger tout ce qui s'affiche en texte** dans
l'UI (HUD compteurs, console, kill feed, scoreboard). Très utile pour debug
d'un mod GSC.

## Pour aller plus loin

- Décompile `R_RegisterDvars` (6.9 Ko) pour avoir la liste complète des `r_*`
  dvars (ex : `r_fullscreen`, `r_aspectRatio`, `r_drawWorld`...)
- Décompile une primitive `RB_*` pour voir l'appel D3D9 final
- Chercher `D3DPRIMITIVETYPE` dans les strings/data pour repérer les `DrawIndexedPrimitive`
- `cg_s` côté client contient `refdef_s refdef` qui décrit la caméra (origin/angles
  de la vue rendue) — base de calcul world-to-screen

---

## Périmètre éthique

Les techniques décrites ici (hook EndScene, lecture viewangles depuis `cg_s`,
projection world-to-screen) sont **standard du dev graphique** et utilisées par
des outils légitimes (FRAPS, Discord overlay, ReShade, debuggers RenderDoc).

Combiner ces briques pour faire un overlay ESP/Wallhack en multijoueur
**n'est pas dans le périmètre** de ce projet (cf. décision documentée dans
le commit principal). On reste sur la documentation moteur + usage en
single-player / dedicated server perso.
