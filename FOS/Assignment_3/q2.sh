#!/bin/bash

# Create emp file
cat <<EOF >emp.txt
101|John|Mumbai|50000
102|Priya|Delhi|60000
103|Amit|Bangalore|45000
104|Sara|Chennai|55000
105|Rahul|Pune|48000
106|Neha|Kolkata|62000
EOF

echo "Created emp.txt file with the following content:"
cat emp.txt
echo

# a. Display eno, ename, and city from emp file
echo "Displaying eno, ename, and city from emp.txt:"
cut -d '|' -f 1,2,3 emp.txt
echo

# b. Display ename such that only 2 characters should display per line
echo "Displaying ename with only 2 characters per line:"
# Extract ename field, then split each name into 2 characters per line
cut -d '|' -f 2 emp.txt | sed 's/../&\n/g'
echo

# c. Display ename in capital letters from emp file
echo "Displaying ename in capital letters:"
cut -d '|' -f 2 emp.txt | tr 'a-z' 'A-Z'
echo

# d. Display emp file with tab delimiters instead of pipe (|)
echo "Displaying emp.txt with tab delimiters:"
cat emp.txt | tr '|' '\t'
echo

rm emp.txt
