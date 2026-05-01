# Analyse du fork IW4v ("scfge/eliott")

Investigation du fork IW4x distribué sous le nom **IW4v** (le `v` final, distinct
de l'upstream `iw4x`).

## Origine confirmée

PDB leak dans `iw4v.dll` :
```
C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\src\Game\Zone.cpp
```

→ Le fork est maintenu par un user **`scfge`** sur un repo nommé **`iw4x-client-eliott`**.

## Architecture à 3 binaires

| Binaire | Rôle | Protection |
|---|---|---|
| `IW4Vanilla.exe` | Launcher (drop-in remplacement de `iw4x.exe`) | Aucune |
| `iw4v.dll` | **Loader free** qui charge `iw4v-plus.dll` | Aucune |
| `iw4v-plus.dll` | Module **premium** avec features étendues | **Themida** |

Strings clés dans `iw4v.dll` confirmant l'architecture :

```
[Loader] WARNING: iw4v-plus.dll not found
g_IW4vFirstLaunch
Welcome to IW4v Multiplayer!
iw4v_config.cfg
iw4v.stat
```

→ Si `iw4v-plus.dll` n'est pas présent, `iw4v.dll` continue en mode dégradé (free).
Avec, il charge la version premium protégée par Themida (anti-RE commercial).

## Classification

C'est un **client modifié distribué commercialement** — pattern courant dans la
communauté IW4 où certains forks ajoutent des features payantes (parfois cheats :
aimbot, ESP, no-recoil ; parfois utilitaires : recording, modding tools).

**Sans charger ni analyser dynamiquement `iw4v-plus.dll`**, on ne peut pas
déterminer la nature exacte des features premium (= ce que Themida protège).
L'analyse statique de `iw4v.dll` (loader) est suffisante pour comprendre
l'architecture sans toucher au cheat lui-même.

## Diff iw4v.dll vs iw4x.dll

Cf. `findings/iw4v-vs-iw4x-diff.md` pour les détails complets. Synthèse :

| Métrique | iw4x.dll | iw4v.dll | Delta |
|---|---|---|---|
| Fonctions Ghidra | 15 207 | 14 240 | **-967** |
| Strings | 10 060 | 9 520 | -540 |
| Imports | 51 | 75 | **+24** |
| Fonctions à adresses identiques | **133** | | |

**Seulement 133 fonctions communes** sur ~15 000 → le fork a un layout mémoire
profondément différent. Causes possibles :
- Compilateur différent / options de build différentes
- Liens / réordonnancements de sections
- Modifications massives ou réécriture de modules entiers

## Features ajoutées (déduites des strings RTTI)

Symboles `IW4V_*` retrouvés dans le mangled name C++ :

- `IW4V_AddUIScript` — système d'UI scriptable custom
- `IW4V_OnCLDisconnected` — handler client disconnect custom
- `IW4V_RegisterClientPacket` — packets client custom (échange protocole étendu)
- `Voice@Components` — module voice chat (avec lambdas)
- `Party@Components` — module party étendu (multiples lambdas vs upstream)

Plus :
- `iw4v_config.cfg`, `iw4v.stat` → fichiers de config/stats locaux dédiés
- `g_IW4vFirstLaunch` → tracking premier lancement (probable activation key)

## Fonction la plus modifiée

`0x100aa195` :
- **iw4x.dll** : 143 octets (probablement un stub vide / wrapper minimal)
- **iw4v.dll** : 10 229 octets (logique massive ajoutée)

→ +10 086 octets de code à cette adresse. Pas de strings ni d'imports détectés
dans son corps (pas de symbol leak), donc la nature exacte n'est pas évidente
sans décompile poussée. Cible probable : un handler étendu d'événement ou un
patch comportemental majeur.

## Cadre éthique de l'analyse

Cette documentation reste dans le cadre du **RE défensif et pédagogique** :

- Identifier l'architecture (3 binaires, protection Themida sur le premium)
- Documenter les modifications visibles (features, branding)
- Comprendre le pattern "free + premium packed" courant dans cette communauté

Sans :
- Décharger / contourner Themida sur `iw4v-plus.dll`
- Reverser le cheat lui-même (les features premium)
- Aider à le distribuer ou améliorer

Le projet IW4x officiel (`iw4x.dll` ici) reste notre cible d'apprentissage
principale. `iw4v.dll` est documenté comme objet d'étude pour comprendre la
**topologie d'un client modifié**.
