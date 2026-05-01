#!/usr/bin/env bash
# Reproduit l'analyse Ghidra headless d'iw4x.dll.
# À lancer pour regenerer ghidra/iw4x-project/ (gitignore, non versionne).
# Duree typique : ~3 min.

set -e
cd "$(dirname "$0")/.."

mkdir -p ghidra/iw4x-project

~/tools/ghidra/support/analyzeHeadless \
  ghidra/iw4x-project iw4x \
  -import targets/iw4x.dll \
  -loader PeLoader \
  -overwrite \
  -log ghidra/headless.log

echo "[+] analyse OK. Pour exporter les fonctions :"
echo "    .venv/bin/python3 scripts/python/ghidra_export.py"
