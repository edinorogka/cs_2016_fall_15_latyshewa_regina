wget -q -O - https://rbc.ru| grep -o "https:.*" | grep -E -v "http://rbc.ru" > rbc.txt
