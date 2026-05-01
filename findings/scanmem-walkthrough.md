# Walkthrough scanmem — première pointer chain

Procédure pas à pas pour trouver une valeur observable dans `iw4x.exe`,
remonter à une adresse stable, et la convertir en chaîne de pointeurs
fiable entre relances. Pris en exemple : **le compteur FPS** (toujours
disponible via `cg_drawFPS 1`).

> **Pré-requis** : jeu lancé, et tu as un terminal libre.

---

## Étape 0 — Activer le compteur FPS dans le jeu

Dans la console IW4x (`~`), tape :

```
/cg_drawFPS 1
```

→ un compteur FPS apparaît. C'est notre valeur cible (un entier qui
oscille typiquement 60–144).

## Étape 1 — Récupérer le PID

Dans ton terminal :

```bash
PID=$(pgrep -fa iw4x.exe | grep -v pgrep | awk '{print $1}' | head -1)
echo "PID : $PID"
```

## Étape 2 — Lancer scanmem en mode interactif

```bash
sudo scanmem -p "$PID"
```

> `sudo` est nécessaire pour lire `/proc/<pid>/mem` d'un process autre
> que celui qui a lancé scanmem. Sur Ubuntu, ça nécessite aussi
> `ptrace_scope=0` ou que tu sois root. Si tu vois "permission denied" :
>
> ```bash
> echo 0 | sudo tee /proc/sys/kernel/yama/ptrace_scope
> ```
> (réversible : remettre `1` après la session).

Tu arrives sur le prompt :

```
0> 
```

## Étape 3 — Configurer le scan

Le FPS est un entier 32 bits. Par défaut scanmem scanne plein de types ;
on le restreint pour aller plus vite :

```
0> option region_scan_level 2
0> option scan_data_type int32
```

`region_scan_level 2` = ne scanne que les régions `rw-p` non backed-file
(c'est dans les **régions anonymes** qu'on a vu en phase 2 — 1.8 Go d'allocs
PE) — pas le code statique des modules.

## Étape 4 — Premier scan : valeur exacte

Note la valeur affichée sur l'écran (ex : 144). Tape-la :

```
0> 144
```

scanmem va sortir `info: we currently have N matches`. N sera énorme
(plusieurs milliers — c'est normal, beaucoup d'autres choses dans la
RAM ont la valeur 144 par hasard).

## Étape 5 — Narrowing par valeurs successives

Attends quelques secondes que le FPS change (regarde le compteur).
Disons que c'est passé à 137. Tape :

```
137> 137
```

scanmem garde uniquement les adresses dont la valeur a changé pour 137.
N va chuter drastiquement. Continue : note le nouveau FPS, tape la
nouvelle valeur. Après 4–5 itérations, tu devrais avoir < 10 matches.

```
137> list
```

→ liste les adresses restantes. Choisis-en une à tester.

## Étape 6 — Vérifier en modifiant

Si tu veux confirmer que c'est la bonne, modifie-la :

```
list> set 999
```

Si le compteur FPS affiche 999 puis change → bingo, c'est l'adresse de
la copie écran (sans doute pas l'adresse "source" mais ça prouve qu'on
est sur le bon spot).

Note l'adresse trouvée, ex : `0x0d7fa320` (dans une région anonyme).

## Étape 7 — Pourquoi cette adresse n'est PAS stable

`0x0d7fa320` est dans une région anonyme allouée par `VirtualAlloc`
côté PE. À chaque relance du jeu, ce mapping anonyme tombera ailleurs.
On a besoin d'une **chaîne de pointeurs** dont la **base est dans un
module PE chargé statiquement** (et chez nous, sans ASLR : adresse
absolue !).

## Étape 8 — Trouver la chaîne avec `pointermap`

Dans scanmem :

```
list> pointermap chain.dat
```

scanmem dump une carte de tous les pointeurs trouvés dans la RAM qui
pointent vers cette zone. Cible la chaîne qui commence dans une région
backed par `iw4x.dll` (`0x10000000–0x106xxxxx` d'après notre
`recon/04-runtime-maps`).

## Étape 9 — Vérifier sur 2 sessions

1. Note la chaîne candidate, ex : `iw4x.dll+0x342580 -> +0x18 -> +0x4`
2. Quitte scanmem (`exit`)
3. Tue le jeu, relance-le, refais `cg_drawFPS 1`
4. Re-scanmem, va directement à la chaîne (`add iw4x.dll + 0x342580`,
   suis les offsets). Vérifie que la valeur lue = FPS courant.

Si ça matche → **chaîne stable trouvée**. Documente dans
`findings/pointer-chains.md`.

---

## Notes pratiques

- scanmem peut être lent sur les premiers scans (plusieurs Go à scanner).
  GameConqueror est le frontend GTK plus pratique pour le narrowing
  (lance avec `gameconqueror`, mais il appelle scanmem en backend).
- Sans ASLR sur `iw4x.dll`, l'adresse de la chaîne **= adresse absolue
  utilisable directement** (pas besoin d'ajouter une base relocée).
  Tu peux donc écrire `0x10342580` directement dans Frida ou dans un script
  Python avec `process_vm_readv`.
- Si le FPS bouge trop vite, choisis une valeur plus stable :
  - `cg_drawScore 1` → score (entier stable)
  - munitions courantes (entier stable hors usage)
  - position joueur (3 floats — `option scan_data_type float`)

## Templates de commande

```bash
# Quick start (à coller tel quel après cg_drawFPS 1)
PID=$(pgrep -fa iw4x.exe | grep -v pgrep | awk '{print $1}' | head -1)
sudo scanmem -p "$PID" <<EOF
option region_scan_level 2
option scan_data_type int32
EOF
# (puis interactif depuis là)
```
