#!/usr/bin/env bash
# Cherche le process iw4x.exe lancé sous Wine et génère sa carte mémoire dans recon/.
# À lancer une fois que le jeu tourne (menu principal suffit).

set -e
cd "$(dirname "$0")/.."

PID=$(pgrep -fa "iw4x\.exe|iw4mp\.exe|IW4Vanilla\.exe" \
      | grep -v 'pgrep\|maps_parser\|dump-iw4x-maps' \
      | awk '{print $1}' | head -1)

if [ -z "$PID" ]; then
    echo "ERREUR : aucun process iw4x.exe / iw4mp.exe / IW4Vanilla.exe trouvé."
    echo "Lance le jeu d'abord, puis relance ce script."
    exit 1
fi

CMD=$(cat /proc/"$PID"/comm 2>/dev/null || echo "?")
TS=$(date +%Y%m%d-%H%M%S)
OUT="recon/04-runtime-maps-${CMD}-${TS}.md"

echo "[+] PID trouvé : $PID ($CMD)"
echo "[+] Capture vers $OUT"

.venv/bin/python3 scripts/python/maps_parser.py "$PID" > "$OUT"

echo "[+] OK — $(wc -l < "$OUT") lignes."
echo "[+] Aperçu :"
echo "----"
head -25 "$OUT"
echo "----"
echo "[+] Fichier complet : $OUT"
