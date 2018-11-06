#bin/sh
cut -d: -f3 | grep -c -i ";$1"
