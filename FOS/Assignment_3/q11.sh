#!/bin/sh
# 11. Create a demo.txt file contain list of atleast 20 name of the cities and implement following
# commands:
# Cut the 2 -4 characters from`` all cities
# Sort all city names
# Display first five cities
# Display last five cities
cat <<EOF >city.txt
Mumbai
Delhi
Bengaluru
Hyderabad
Chennai
Kolkata
Pune
Ahmedabad
Jaipur
Surat
Lucknow
Kanpur
Nagpur
Bhopal
Patna
Indore
Vadodara
Coimbatore
Thiruvananthapuram
Varanasi
EOF
cut -c 2,4 city.txt
sort city.txt
echo "First 5 cities: \n"
head -5 city.txt
echo "\n\nLast 5 cities: \n"
tail -5 city.txt
