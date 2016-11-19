wget -q -O - https://ria.ru| grep -o "https:.*" | grep -E -v "http://rbc.ru" > rbc.txt
