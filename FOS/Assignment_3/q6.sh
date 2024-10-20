#!/bin/sh
# 6. Write a shell script to accept a file name from user and check that given file is exist or not if
# the file exist then display all the file content in capital letters.
read -p "Enter the file name: " file
if [ ! $file ]; then
    echo "File does'nt exist"
    exit
fi
cat $file | tr '[:lower:]' '[:upper:]'
