# Findings clés — Phase 1 (recon statique)

*Ce fichier est la synthèse à lire en premier. Détails complets dans `01-pe-headers.md`,
`02-strings-triage.md`, `03-elf-launcher.md`.*

---

## 1. `iw4v-plus.dll` est protégé par **Themida** ⚠️

Empreintes caractéristiques trouvées :

| Indicateur | Constat |
|---|---|
| Sections nommées par leur taille hex (`0004ac00`, `00017400`…) | classique Themida |
| Section `.themida` présente (taille 0) | stub Themida |
| Section `.boot` (1.5 Mo, entropie 7.93) | payload Themida chiffré |
| Toutes sections code/data avec entropie ≥ 7.93 | chiffrement complet |
| Imports drastiquement réduits (17 vs 19 dans `iw4v.dll`) | imports résolus dynamiquement par le stub |
| Entry point dans la section `.boot` | exécution démarre dans le stub Themida |

**Conséquence** : reverse direct = très difficile. Themida fait de la virtualisation
d'instructions, anti-debug, anti-VM, anti-tampering. Unpacker manuellement = projet expert
de plusieurs mois.

**Décision méthodologique** : on **ignore `iw4v-plus.dll` pour le moment** comme cible
d'apprentissage. On le documente comme observation. Si on veut l'analyser plus tard, on le
fera **dynamiquement** (observer son comportement en RAM après dépaquetage automatique au
chargement) plutôt que statiquement sur l'image disque.

> **Cadre éthique** : la présence de Themida sur `iw4v-plus.dll` est cohérente avec un
> client modifié distribué commercialement et protégé contre l'analyse. On peut l'analyser
> **comme objet de RE défensif** (documenter les techniques de protection, comparer son
> comportement avec `iw4v.dll` legit). On n'aide pas à en améliorer/distribuer un.

## 2. Chaîne de provenance des binaires (via PDB leaks)

Les chemins `.pdb` laissés dans les binaires révèlent leur origine :

| Binaire | PDB leak | Interprétation |
|---|---|---|
| `iw4mp.exe` | `c:\trees\iw4-pc\game\pc\iw4mp_ship.pdb` | **Build officiel Infinity Ward** (release "ship") |
| `iw4sp.exe` | `c:\trees\build-iw4-pc\iw4\code_source\src\CodeOutput\iw4sp\Steam_CEG_bin\iw4sp.pdb` | **Build officiel IW + Steam CEG** (DRM Custom Executable Generation) |
| `iw4x.dll` | `D:\a\iw4x-client\iw4x-client\build\bin\Win32\Release\iw4x.pdb` | Build **GitHub Actions** d'iw4x-client (pattern `D:\a\` = GHA) |
| `iw4v.dll` | `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\build\bin\Win32\Release\iw4v.pdb` | **Build local** d'un user `scfge` sur un fork `iw4x-client-eliott` |

`iw4v.dll` est donc un **fork modifié d'IW4x** compilé en local. À investiguer : qu'est-ce
que ce fork change par rapport à l'upstream ? `iw4v-plus.dll` (Themida) est très probablement
la version "premium" payante du même fork.

## 3. Architecture / endpoints réseau

Tous les binaires PE sont **PE32 x86 32-bit (Intel 80386)**. Tooling à configurer en 32-bit
partout (Ghidra : `x86:LE:32:default`, Frida : agent 32-bit, scanmem : 32-bit).

**Endpoints réseau identifiés** :

- IW4x (legit) : `iw4x.io`, `cdn.iw4x.io`, `api.github.com/repos/iw4x/iw4x-client/releases/latest`,
  `raw.githubusercontent.com/iw4x/iw4x-cache`
- MW2 original (`iw4mp.exe`) : `web1.pc.iw4.iwnet.infinityward.com` — **serveur IW.net mort
  depuis 2014** (preuve que c'est bien le binaire d'origine 2009)
- Variante `iw4v` : URLs IW4x + validations OCSP DigiCert → présence de TLS

## 4. RTTI et structures C++

Très peu de RTTI dans tous les binaires (`type_info` + `CCallbackBase` du Steam SDK).
**Conclusion** : moteur IW4 écrit en "C with classes" (peu de virtual, pas de polymorphisme
profond). On n'aura pas le luxe de retrouver les noms de classes via RTTI — il faudra
les nommer nous-mêmes en se basant sur les call patterns et les strings de debug.

## 5. Le launcher Linux est un cadeau

`iw4x-launcher` (ELF x86-64) :

- **Non strippé**, avec `.debug_info` DWARF complet (~6 Mo)
- **31 871 symboles** dans `.symtab`
- Statiquement lié (uniquement `libm`, `libc` en dynamique)
- Embarque : `curl` (statique), un parser **JSON5**, **SQLite** (vu les `jsonAppendSqlValue.lto_priv.0`)
- Entry point à `0x41dfc0`

**C'est notre cible pédagogique #1 pour démarrer** : pas de couche Wine, symboles présents,
on lit Ghidra comme du code source quasi.

## 6. Crash récent à exploiter

`minidumps/iw4x-r5039-20260501001438.dmp` — crash daté du **jour même**, build IW4x **r5039**.
Format minidump Windows. À analyser dès qu'on aura :
- L'image PE matchant cette révision (à vérifier — `iw4x.dll` actuel correspond-il à r5039 ?)
- Les symboles de cette révision (PDB téléchargeable depuis le repo IW4x ?)

À tracer en phase 2 ou 3.

---

## Décisions actées suite à cette phase

1. **Cibles d'apprentissage** : `iw4x-launcher` (priorité 1), puis `iw4x.exe`/`iw4x.dll`,
   puis `iw4mp.exe`/`iw4sp.exe`. **Ignorer** `iw4v-plus.dll` (Themida).
2. **Comparer** `iw4v.dll` (build user `scfge`) avec `iw4x.dll` (upstream GHA) → quels
   patches ce fork applique-t-il ? Excellent exercice de RE comparatif (diffing).
3. **Cloner** l'upstream IW4x (`refs/iw4x-client/`) pour cross-référencer notre RE avec
   le code source réel (énorme avantage pédagogique).
4. **Phase 2** : recon dynamique. Démarrer le jeu, attacher GDB / parser `/proc/<pid>/maps`.
