#!/bin/sh
# 15. Accept a file and check if the words in that file are greater than 20 print “Enough Words” else print “More words to enter”.

read -p "Enter the file name: " file

word_count=$(wc -w <$file)

if [ $word_count -gt 20 ]; then
    echo "Enough Words"
else
    echo "More words to enter"
fi
