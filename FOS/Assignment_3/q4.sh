#!/bin/sh
# 4. Write a shell script to perform following task on student file
# a. cut city from student file and store it in new file
# b. cut rno and marks from student file and store it in marks file
# c. display the student who get highest marks
# d. display only numbers from student file

echo "Select an option:"
echo "1. Cut city from student file and store it in new file"
echo "2. Cut rno and marks from student file and store it in marks file"
echo "3. Display the student who get highest marks"
echo "4. Display only numbers from student file"
echo "5. Exit"
read -p "Enter choice [1-5]: " choice
case $choice in
1) cut -f3 -d'|' student.txt >city.txt ;;
2) cut -f1,3 -d'|' student.txt >rno.txt ;;
3) sort -t'|' -k4 -nr student.txt | head -1 ;;
4) grep -o '[0-9]\+' student.txt ;;
5) exit ;;
*) echo "Invalid choice!" ;;
esac
