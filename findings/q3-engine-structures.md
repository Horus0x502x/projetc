# Structures du moteur IW4 (Q3-derived)

Documentation des structures C++ centrales du moteur, extraites de
`refs/iw4x-client/src/Game/Structs.hpp` (12 155 lignes au total).

> **Périmètre** : documentation de l'architecture mémoire pour comprendre comment
> le moteur stocke son état (player, entité, client, world). Connaître les offsets
> permet d'écrire des hooks d'instrumentation (debug overlay personnel,
> recording de demos, mods côté serveur). Pour usage en lab single-player /
> dedicated server perso uniquement.

## `playerState_s` — état du joueur côté gameplay

**Taille : `0x311C` (12 572 octets) — confirmé par `static_assert`**
**Localisation source : `Structs.hpp:1753`**

C'est l'état complet d'un joueur prédit côté client (cgame) ET autoritaire côté
serveur (game). Synchronisé via snapshots delta-compressed.

### Champs critiques (offsets approximatifs)

| Offset (déduit) | Champ | Type | Sémantique |
|---|---|---|---|
| `0x000` | `commandTime` | `int` | Tick du dernier `usercmd_s` traité |
| `0x004` | `pm_type` | `int` | Type de PM (NORMAL/DEAD/SPECTATOR/NOCLIP/INTERMISSION) |
| `0x008` | `pm_time` | `int` | Durée du state PM courant (ms) |
| `0x00C` | `pm_flags` | `int` | Flags PM (DUCKED/PRONED/JUMPING/etc.) |
| `0x024` | `origin[3]` | `float[3]` | Position monde **xyz** |
| `0x030` | `velocity[3]` | `float[3]` | Vélocité monde |
| `0x104` | `clientNum` | `int` | Index dans la table de clients (0..MAX_CLIENTS-1) |
| `0x10C` | `viewangles[3]` | `float[3]` | **Angles de vue** (pitch, yaw, roll) |
| `0x144` | `eFlags` | `int` | Flags entité (visible, invisible, dead) |
| ... | `weapState[2]` | `PlayerActiveWeaponState` | États armes actives |
| ... | `weaponsEquipped[15]` | `unsigned int[15]` | Inventaire armes |
| ... | `partBits[6]` | `unsigned int[6]` | Visibility bitfield (par partie du corps) |

> **Note** : les offsets exacts au-delà de `0x144` requièrent de calculer la taille
> de chaque sous-struct. Pour précision absolue, parser `Structs.hpp` programmatiquement
> ou utiliser `offsetof()` dans un programme C compilé contre cette struct.

### Adresses globales (à confirmer via Functions.cpp)

`playerState_s` n'est pas exposé en variable globale unique — il y en a un par client
+ un côté snapshot. Accès typique :
- `cg_t::predictedPlayerState` (état prédit du joueur local côté client)
- `clientState_s::ps` (état autoritaire côté serveur, dans la table de clients)

## `gentity_s` — entité serveur

**Taille : `0x274` (628 octets)**
**Localisation source : `Structs.hpp:7667`**

Entité côté serveur (game module) — joueurs, projectiles, items, triggers, etc.
La table globale est `g_entities[MAX_GENTITIES]`.

### Champs critiques

| Champ | Type | Sémantique |
|---|---|---|
| `s` | `entityState_s` | État réseau (envoyé aux clients) |
| `r` | `entityShared_t` | Bbox, broadcast info |
| `client` | `gclient_s*` | Pointeur vers client si entité = joueur (offset 344 commenté !) |
| `health` | `int` | HP courants |
| `maxHealth` | `int` | HP max |
| `damage` | `int` | Dégâts (projectile / contact) |
| `flags` | `int` | EF_* (entity flags) |
| `nextthink` | `int` | Tick du prochain `think()` callback |
| `processedFrame` | `int` | Anti-double-process per frame |

## `gclient_s` — client serveur (= joueur)

**Localisation source : `Structs.hpp:7470`**

État joueur côté serveur, lié à `gentity_s::client` quand `gentity_s` représente
un joueur. Contient `playerState_s ps` en premier champ typiquement.

## `clientState_s` — client réseau

**Localisation source : `Structs.hpp:1977`**

État de connexion réseau d'un client (côté serveur).

## `cg_s` — game state client

**Localisation source : `Structs.hpp:9494`**

Variable globale `cgArray[]` côté client. Contient `predictedPlayerState`
(notre playerState_s prédit), state du HUD, snapshots reçus, etc.

## `centity_s` — entité côté client

**Localisation source : `Structs.hpp:9387`**

Représentation client-side d'une entité reçue via snapshot. Table globale
typiquement `cg_entities[MAX_GENTITIES]`. Contient `entityState_s currentState`
+ interpolation data.

---

## Comment les utiliser concrètement

### 1. Lire un offset depuis Frida

Une fois la base de la table d'entités connue (à trouver via Functions.cpp ou
en cherchant `&g_entities` dans le source), on peut faire :

```javascript
// Hypothetical : g_entities @ 0x1A831A8 (vu dans Security.cpp:78 !)
const G_ENTITIES_BASE = ptr("0x1A831A8");
const GENTITY_SIZE = 0x274;  // confirmed sizeof(gentity_s)

function readGentity(idx) {
    const base = G_ENTITIES_BASE.add(idx * GENTITY_SIZE);
    return {
        // entityState_s s starts at offset 0
        // entityShared_t r at the size of entityState_s
        // client* at offset 344 (cf. comment in Structs.hpp:7670)
        client: base.add(344).readPointer(),
        health: base.add(/*offset health*/).readInt(),
    };
}
```

### 2. Vérifier l'adresse `g_entities` dans Security.cpp

Dans `Security.cpp:78` :
```asm
mov ecx, ds:1A831A8h // level: &g_clients
```

Donc **`level.clients` = `0x1A831A8`** dans iw4x.exe runtime. Et `level` est un
struct global qui contient les arrays `clients[]` et `entities[]`.

### 3. Cas d'usage légitimes

- **Demo recording / theatre** : capturer la séquence d'états joueurs pour replay
- **Mod côté serveur** : modifier le comportement d'une entité (modes de jeu custom)
- **Debug overlay** : afficher les états en lab pour comprendre la prédiction client/serveur
- **Tools de mapping/Zonebuilding** : itérer sur les entités d'une map

---

## Pour aller plus loin

- `Structs.hpp:9387-9494+` contient toute la chaîne `centity_s`, `cg_s`, `cgs_t`
  côté client
- `Structs.hpp:7470-7900` contient la chaîne serveur `gentity_s`, `gclient_s`,
  `level_locals_t` (probable)
- Outil d'extraction d'offsets précis : compiler un petit C qui inclut les
  structures et `printf` les `offsetof()` (laissé en exercice)
