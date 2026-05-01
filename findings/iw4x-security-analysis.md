# Module Security d'IW4x — analyse défensive

Analyse des protections appliquées par IW4x au moteur IW4 original via
le module `Components/Modules/Security.cpp` (220 lignes).

> **Cadre** : analyse défensive — comprendre **comment IW4x corrige les
> bugs et exploits du moteur original** pour rendre le multijoueur jouable
> sur serveurs privés. C'est essentiellement un **patch security** ajouté
> par-dessus le binaire d'Infinity Ward.

## Vue d'ensemble

Tous les patches sont installés dans le **constructor `Security::Security()`**.
Source : `refs/iw4x-client/src/Components/Modules/Security.cpp`.

| Adresse cible (iw4x.exe) | Type | Vulnérabilité corrigée |
|---|---|---|
| `0x412C30` | HOOK_JUMP | **OOB write `UI_ReplaceDirective`** (Server→Client) |
| `0x412370` | RET (`0xC3`) | **`SV_SteamAuthClient`** désactivé |
| `0x5A8C70` | RET (`0xC3`) | **`CL_HandleRelayPacket`** désactivé |
| `0x41698E` | NOP×5 | **`Svcmd_EntityList_f`** désactivé (info disclosure) |
| `0x405959` | Stub | `SelectStringTableEntryInDvar` (modif dvar restreint) |
| `0x469AC0` | HOOK_JUMP | `G_GetClientScore` (uninit game) |
| `0x5B67ED` | HOOK_CALL | `PartyHost_HandleJoinPartyRequest` (`atol` adjust limit) |
| `0x5F70B5` | HOOK_CALL | **`G_LogPrintf` format string bug** (IW devs ont oublié `"%s"`) |
| `0x6267E3` | HOOK_CALL | **`NET_DeferPacketToClient`** (buffer overflow) |
| `0x626996` | HOOK_CALL | **`SV_ExecuteClientMessage`** (server freezer exploit) |
| `0x460F6D` | JMP (`0xEB`) | `SV_DirectConnect` (info string fake) |
| `0x414D92` | HOOK_CALL | `SV_ExecuteClientCommands` (huffman compress check) |
| `0x4A9F56` | HOOK_CALL | `CL_ParseServerMessage` (huffman compress check) |
| `0x420937` | NOP×5 | `Live_Init→DL_Init` (curl 7.19.4 vulnérable, désactivé) |
| `0x40F8DB`, `0x40F88C` | NOP×5 | `Live_Frame` checks downloads/playlists (curl) |
| `0x420B54` | NOP×5 | `Live_Init→LiveStorage_FetchPlaylists` |

## Catégories de protections

### 1. Exploits Server → Client (corrigés)

Le moteur IW4 original avait plusieurs vulnérabilités où **un serveur malveillant
pouvait crasher ou compromettre le client** :

- **`UI_ReplaceDirective`** (`0x412C30`) : OOB write sur `hudElemString` quand
  `message` non-null-terminated. IW4x pré-tronque le `message` avant l'iter.
- **`CL_ParseServerMessage`** (`0x4A9F56`) : huffman decompression sans bounds
  check → IW4x check les bits avant decompress.
- **`Msg_ReadBitsCompressCheck`** (générique) : utilisé partout pour valider
  les huffman-compressed payloads.

### 2. Exploits Client → Server (corrigés)

Vulnérabilités où **un client malveillant pouvait crasher/freezer le serveur**
ou abuser du protocole :

- **`SV_ExecuteClientMessage`** (`0x626996`) : exploit de "server freezer"
  (probablement boucle infinie ou allocation massive). Patch ajoute des limites.
- **`NET_DeferPacketToClient`** (`0x6267E3`) : buffer overflow par packet
  malformé.
- **`SV_DirectConnect`** (`0x460F6D`) : `0xEB` = `JMP short` qui saute la
  vérification du `infoString` envoyé par client (commentaire : "The client
  can fake the info string"). Patch IW4x assure une validation côté serveur.

### 3. Exploits utilitaires (corrigés)

- **`G_LogPrintf`** (`0x5F70B5`) : **format string bug** classique.
  Les devs IW ont oublié de mettre `"%s"` comme premier argument quand ils
  appellent `G_LogPrint(formatString)` avec une string contrôlée par le
  joueur. IW4x ajoute le `"%s"` manquant.
- **`SelectStringTableEntryInDvar`** (`0x405959`) : permettait de modifier
  un dvar protégé (flagged `DVAR_PROTECTED`). IW4x check les flags.

### 4. Désactivations (`0xC3` = `RET` ou `NOP×5`)

Code obsolète/dangereux complètement désactivé :

- **`SV_SteamAuthClient`** (`0x412370`) : authentification Steam d'Activision,
  morte avec IW.net en 2014. Désactivée car peut planter.
- **`CL_HandleRelayPacket`** (`0x5A8C70`) : relais de packet, vecteur
  d'attaque, fonctionnalité inutile pour serveurs privés.
- **`Svcmd_EntityList_f`** (`0x41698E`) : commande server qui dumpait
  toutes les entités (info disclosure, et lent). NOP-out.
- **Curl 7.19.4** (4 calls NOP'd) : version ancienne avec CVE connues
  (CVE-2009-2417, etc.). IW4x désactive complètement les calls qui l'utilisent
  côté Live (matchmaking, downloads, playlists).

## Implications

### Pour comprendre IW4x

C'est un **patch security professionnel** sur un binaire vieux de 16 ans
(MW2 = 2009). La plupart des CVE/exploits connus du moteur IW sont corrigés
ici. C'est ce qui rend IW4x viable comme client multijoueur.

### Pour le RE

Toutes ces adresses sont **points d'entrée pour comprendre le moteur original**.
Décompiler la fonction à `0x412C30` dans Ghidra montre la version vulnérable
de `UI_ReplaceDirective` ; comparer avec le source d'IW4x du stub révèle
**comment exploiter** (et donc comment se protéger).

### Pour le défensif

Si on voulait écrire un **anti-cheat** ou détecter des hooks malveillants,
ces adresses sont les sites légitimement patchés par IW4x — un anti-cheat
distinguerait :
- patches IW4x = OK (signature connue)
- autres modifications = suspectes

### Adresses clés à mémoriser

```
0x1A831A8  level.clients  (variable globale, table des clients)
0x412C30   UI_ReplaceDirective       (Server→Client OOB)
0x626996   SV_ExecuteClientMessage   (Server freezer)
0x6267E3   NET_DeferPacketToClient   (buffer overflow)
0x5F70B5   G_LogPrintf               (format string bug)
0x460F6D   SV_DirectConnect          (info string spoofing)
0x412370   SV_SteamAuthClient        (DEAD - Steam auth)
```
