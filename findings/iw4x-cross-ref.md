# Cross-références binaire ↔ source IW4x

Correspondances **confirmées** entre adresses dans `iw4x.dll` (runtime) et fichiers
source de l'upstream `iw4x/iw4x-client` (cloné dans `refs/iw4x-client/`).

Méthode : décompilation Ghidra + grep des strings caractéristiques dans le source.
Chaque correspondance ci-dessous a été vérifiée par lecture comparée du
pseudo-C Ghidra et du `.cpp` source.

> Toutes les adresses sont 1:1 avec le runtime (pas d'ASLR sur `iw4x.dll`,
> base `0x10000000`). Donc `0x1005e6b0` est aussi bien valide dans Ghidra
> qu'en target Frida `Interceptor.attach(ptr("0x1005e6b0"), …)`.

## Confirmées

### `0x1005e6b0` — `Components::ScriptError::AddOpcodePos`

- **Source** : `refs/iw4x-client/src/Components/Modules/GSC/ScriptError.cpp:551`
- **Binaire** : `findings/decompiled/0x1005e6b0-gsc_vm_helper.c`
- **Indice** : appel à `Sys_Error("MAX_OPCODE_LOOKUP_SIZE exceeded")` quand
  `opcodeLookupMaxSize >= 0x1000000`.
- **Adresse de `Sys_Error` du jeu** : `0x0043d570` (dans `iw4x.exe`, pas
  `iw4x.dll`). C'est une fonction du moteur IW original strippé.
- **Pattern d'appel** : appelée 116 fois → utilisée à chaque `OP_*` ajouté au
  lookup pendant la compilation GSC.

### `0x100c2282` — `Components::Zones::Zones` (constructor du module Zones)

- **Source** : `refs/iw4x-client/src/Components/Modules/Zones.cpp` (ctor enregistre
  les commandes `decryptImages`/`decryptSounds` aux lignes 3488 & 3522)
- **Binaire** : `findings/decompiled/0x100c2282-asset_decrypter.c`
- **Indice** : structure typique de constructeur C++ avec EH prolog, suivi de
  multiples `FUN_100047d1(rdata_ptr, lambda_ptr, 1)` → pattern de `Command::Add`.
- **Correction du label** : ce n'est pas le déchiffreur d'assets lui-même
  (initialement supposé), c'est le **module Zones qui *enregistre* la commande
  console `decryptImages`**. Le déchiffreur réel est ailleurs (la lambda enregistrée).
- **Prochaine étape** : suivre `FUN_100c18c6` (lambda de `decryptImages`) pour
  trouver la routine de déchiffrement effective.

### `0x100dbb62` — `Components::AssetInterfaces::IWeapon` (parse weapon)

- **Source** : `refs/iw4x-client/src/Components/Modules/AssetInterfaces/IWeapon.cpp`
- **Binaire** : décompile pas encore générée (58 Ko, à faire séparément)
- **Indice** : strings `szInternalName`, `szDisplayName`, `hideTags`, `szXAnims`,
  `fAdsZoomFov` correspondent exactement aux champs de `Game::WeaponDef` dans
  `Game/Structs.hpp:5521`.
- **Variante** : `0x100e9e98` (35 Ko) = vraisemblablement le **dump/save** counterpart
  du parser (les deux opèrent sur le même set de strings).

## À investiguer

Toutes nos fonctions remarquables (cf. `iw4x-interesting-functions.md`) qui ne
sont pas encore cross-référencées :

- **Protobuf serializer** (6 fonctions à `0x10137efc`, `0x10136dad`, etc.) :
  embedded dans `deps/protobuf/src/google/protobuf/wire_format.cc`. Pas une
  modif IW4x mais code upstream Google. Utile à connaître pour identifier les
  RPC IW4x utilisant protobuf.
- **`0x100f6bc9`** (regex `\.v\["soundalias"\]`) : pré-traitement des assets
  sound dans Zones, à confirmer.
- **`0x100bd117`** (table de techsets `wc_unlit_*`) : probable mapping
  technique → matériau dans le renderer.

## Implications pratiques

1. **`Sys_Error`** : adresse `0x0043d570` dans `iw4x.exe`. C'est un point d'entrée
   unique pour intercepter toutes les erreurs fatales du jeu. Cible Frida
   évidente pour prévenir les crashs ou logger.
2. **Module Zones** : le constructor à `0x100c2282` enregistre toutes les
   commandes IW4x liées à la manipulation de FastFiles. Hooker ce constructor
   dévoile l'API étendue d'IW4x.
3. **GSC AddOpcodePos** : pour tracer toute compilation de script GSC, hook
   `0x1005e6b0`. Combiné avec le contenu de `tools/mw2-raw-gsc/`, on peut
   réassembler quel script est en train d'être compilé.
