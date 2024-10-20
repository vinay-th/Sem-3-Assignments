#!/bin/sh
# 8. Write a shell script to accept a file name from user and check that given file is exist or not if
# the file exist then check that given file is in sorted order or not if the file is not in sorted
# order then display file in sorted oreder in descending.
read -p "Enter the filename: " file
if [ ! $file ]; then
    echo "File does not exist"
    exit
fi
sort $file -t '|' -k 4,4 -r >demo.txt
if cmp -s "$file" "demo.txt"; then
    echo "File are same"
else
    echo "File sorted in descending order"
    cat demo.txt
fi
