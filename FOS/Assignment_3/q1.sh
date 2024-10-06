#!/bin/bash

# Create emp file with the following format if it doesn't exist
cat <<EOF >emp.txt
101|John|Mumbai|50000
102|Priya|Delhi|60000
103|Amit|Bangalore|45000
104|Sara|Chennai|55000
105|Rahul|Pune|48000
106|Neha|Kolkata|62000
EOF

# a. Display first 3 lines from emp file
echo "First 3 lines from emp.txt:"
head -n 3 emp.txt
echo

# b. Display last 3 lines from emp file
echo "Last 3 lines from emp.txt: \n"
tail -n 3 emp.txt
echo

# c. Display emp file in sorted order (sorted by eno)
echo "emp.txt sorted by eno: \n"
sort emp.txt
echo

# d. Display eno and city from emp file
echo "Displaying eno and city from emp.txt: \n"
cut -d '|' -f 1,3 emp.txt

rm emp.txt
