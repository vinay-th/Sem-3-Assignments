#!/bin/sh
# 5. Write a shell script to accept a file name and check that given file is exist or not.If the file is
# exist then display the file content in following format.
# a. Display content in sorted order b. Display first five lines from the file
# c. Display last five lines from the file d. paste two files sequencially with “|” delimeters

read -p "Enter file name: " f1
if [ ! -f $f1 ]; then
    echo "File does not exist!"
    exit
fi
echo "Select an option:"
echo "1. Display content in sorted order"
echo "2. Display first five lines from the file"
echo "3. Display last five lines from the file"
echo "4. paste two files sequencially with “|” delimeters"
echo "5. Exit"
read -p "Enter choice [1-5]: " choice
case $choice in
1) cat $f1 | sort ;;
2) head -5 $f1 ;;
3) tail -5 $f1 ;;
4)
     read -p "Enter second file name: " f2
     if [ ! -f $f2 ]; then
         echo "File does not exist!"
         exit
     fi
     paste $f1 $f2 ;;
5) exit ;;
*) echo "Invalid choice!" ;;
esac
