#!/usr/bin/env bash
# Source ce fichier dans ton shell pour activer l'environnement projet :
#     source tools/env.sh
#
# Active : venv Python (frida, pefile, capstone, lief, pwntools, ipython)
# Expose : Ghidra (commande `ghidra`)

PROJECT_ROOT="$( cd "$( dirname "${BASH_SOURCE[0]}" )/.." && pwd )"

# Python venv
if [ -f "$PROJECT_ROOT/.venv/bin/activate" ]; then
    # shellcheck disable=SC1091
    source "$PROJECT_ROOT/.venv/bin/activate"
    echo "[env] venv actif : $(which python3)"
else
    echo "[env] WARN : .venv absent — lance d'abord : python3 -m venv .venv && pip install -r ..."
fi

# Ghidra alias
if [ -x "$HOME/tools/ghidra/ghidraRun" ]; then
    alias ghidra="$HOME/tools/ghidra/ghidraRun"
    export GHIDRA_HOME="$HOME/tools/ghidra"
    echo "[env] ghidra alias OK ($GHIDRA_HOME)"
fi

# Raccourcis utiles
alias maps='cat /proc/$(pgrep -f iw4x.exe | head -1)/maps 2>/dev/null'
alias iw4xpid='pgrep -f iw4x.exe | head -1'

echo "[env] OK — projet : $PROJECT_ROOT"
