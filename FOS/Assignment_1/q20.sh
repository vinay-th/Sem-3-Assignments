#!/bin/sh
# 20. Accept a file and check if the lines n that file are greater than 10 print “Enough Lines” else print “More lines to enter”.

read -p "Enter the file name: " file

line=$(wc -l <"$file")

if [ $line -gt 10 ]; then
    echo "Enough lines"
else
    echo "More lines to enter"
fi
