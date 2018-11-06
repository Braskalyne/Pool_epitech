#bin/sh
cat Day02/passwd | sed -n "n;p" | cut -d : -f1 | rev | sort -r | sed -n "$MY_LINE1, $MY_LINE2 p" | tr '\n' ','| sed -e 's/,/, /g' | rev | sed -e 's/,/./' | sort -r | rev | sed '$ s/.$//' 
