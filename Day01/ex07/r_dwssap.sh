# TO TEST THIS PROPERLY: the tester must set the env variables FT_LINE1 and FT_LINE2 using export 
# remove comments | print every other even line | reverse sort | select login tupple | reverse | select only lines between enviroment variables | replace new lines for commas | replace last comma for a dot 
cat /etc/passwd | grep -v "#" | sed '1d; n; d' | sort -r | cut -d : -f 1 | rev | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr -s '\n' "," | sed  "s/.$/./"
