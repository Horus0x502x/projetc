# Recon ELF — `iw4x-launcher`

Le launcher est un ELF Linux natif x86-64. Cible **idéale pour démarrer le RE** :
non strippé, debug info DWARF complet, peu de dépendances dynamiques.

## En-tête

| Champ | Valeur |
|---|---|
| Type | EXEC (binaire exécutable, pas PIE) |
| Architecture | x86-64 |
| OS/ABI | UNIX - GNU |
| Entry point | `0x41dfc0` |
| Section count | 46 |

> **Note** : `Type: EXEC` → adresses absolues, **pas de PIE**. ASLR ne s'applique pas
> au binaire lui-même — les adresses dans `objdump` correspondent directement aux adresses
> en RAM. Énorme simplification pour démarrer.

## Sections clés

| Section | Adresse | Taille | Rôle |
|---|---|---|---|
| `.text` | `0x4015c0` | ~5.0 Mo | code |
| `.rodata` | `0x8e00c0` | ~1.2 Mo | constantes (strings, tables) |
| `.dynsym` | `0x8db068` | ~7.7 Ko | 327 symboles d'imports dynamiques |
| `.data.rel.ro` | `0xb28bc0` | ~33 Ko | données read-only après reloc (vtables, etc.) |
| `.data` | `0xb31900` | ~42 Ko | données globales mutables |
| `.symtab` | (off `0x126ef20`) | ~770 Ko | **31 871 symboles** complets |
| `.debug_info` | (off `0x74d0f0`) | ~6 Mo | DWARF complet |

## Dépendances dynamiques

```
NEEDED libm.so.6
NEEDED libc.so.6
```

Tout le reste est **statiquement lié** dans le binaire. Conséquences :

- pas de surface de hooking sur `LD_PRELOAD` au-delà de libm/libc
- les libs tierces (curl, OpenSSL, json5, SQLite) sont **dans le binaire** → leurs symboles
  apparaissent dans `.symtab` (`HTTP_str_reasons`, `jsonAppendSqlValue.lto_priv.0`, etc.)
- compilation avec **LTO** (Link-Time Optimization) — visible aux suffixes `.lto_priv.N`

## Empreintes de bibliothèques tierces statiquement liées

Détectées par les noms de symboles :

| Bibliothèque | Indice |
|---|---|
| **libcurl** | `HTTP_str_reasons`, `Curl_*` (à confirmer avec un grep complet) |
| **JSON5 parser** | `json5Whitespace`, `jsonAppendChar`, etc. |
| **SQLite** | `jsonAppendSqlValue.lto_priv.0` — c'est du JSON1 de SQLite |
| **OpenSSL / mbedTLS** | à confirmer (cherche `SSL_*`, `mbedtls_*`) |

## Stratégie d'analyse

1. Charger dans **Ghidra** avec auto-analysis. Les symboles + DWARF donneront directement
   noms de fonctions, types, et même structures.
2. Renommer vers nos conventions au besoin, mais dans 80 % des cas le nom upstream suffit.
3. Cross-référencer avec l'upstream `iw4x-launcher` sur GitHub si dispo (à vérifier — le
   launcher peut être dans un repo séparé d'`iw4x-client`).

## Commandes utiles à garder

```bash
# Tous les symboles texte (fonctions)
nm targets/iw4x-launcher | awk '$2 ~ /[Tt]/ {print $3}' > /tmp/iw4x-launcher.funcs

# Strings du binaire avec leur adresse
strings -tx targets/iw4x-launcher > /tmp/iw4x-launcher.strings

# Décompiler une fonction par adresse (objdump simple)
objdump -d --start-address=0x41dfc0 --stop-address=0x41e100 targets/iw4x-launcher
```
