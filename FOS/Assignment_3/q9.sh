#!/bin/sh
# 9. Write a shell script to perform following task on student file and emp file
# a. display the student who get highest marks. b. display the student who get lowest marrks
# c. display the emp who get highest salary d. display the emp who get lowest salary
echo "\nThe student who got maximum marks is: "
sort -t '|' -k 4,4 -r student.txt | head -1

echo "\nThe student who got lowest marks is: "
sort -t '|' -k 4,4 student.txt | head -1

echo "\nThe employee who got maximum salary is: "
sort -t '|' -k 4,4 -r emp.txt | head -1

echo "\nThe employee who got lowest salary is: "
sort -t '|' -k 4,4 emp.txt | head -1
