#!/bin/bash

# Create emp.txt
cat <<EOF >emp.txt
101|John|Mumbai|50000
102|Priya|Delhi|60000
103|Amit|Bangalore|45000
104|Sara|Chennai|55000
105|Rahul|Pune|48000
106|Neha|Kolkata|62000
EOF

# Create student.txt
cat <<EOF >student.txt
1|Akash|Mumbai|85
2|Nisha|Delhi|78
3|Ravi|Bangalore|90
4|Megha|Chennai|88
5|Vikas|Pune|76
6|Sneha|Kolkata|95
EOF

echo "Created emp.txt and student.txt files."

# a. Display emp and student files horizontally
echo "Displaying emp.txt and student.txt horizontally:"
paste emp.txt student.txt
echo

# b. Display emp and student files sequence-wise with tab delimiter
echo "Displaying emp.txt and student.txt sequence-wise with tab delimiter:"
cat emp.txt student.txt | tr '|' '\t'
echo

# c. Join emp and student files on city and display the result
echo "Joining emp.txt and student.txt on city and displaying result:"
# Sort both files by city (field 3 in emp.txt and field 3 in student.txt), then join
join -t '|' -1 3 -2 3 <(sort -t '|' -k3 emp.txt) <(sort -t '|' -k3 student.txt)
echo

# d. Sort marks from student.txt in reverse order
echo "Sorting student.txt by marks in reverse order:"
sort -t '|' -k4 -nr student.txt
echo

rm emp.txt student.txt
