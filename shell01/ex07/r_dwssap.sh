#!/bin/sh
cat /etc/passwd | sed -n "s/:.*//;2~2p" | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2} p" | tr "\n" "," | sed s/','/', '/g | sed s/', '$/'.'/g