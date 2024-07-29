#!/bin/sh

# 9. Write a shell script to perform the following:
# • Display long listing of the file f1
# • Display number of lines, characters of the file f1
# • Display all the hidden files in current directory

# Display long listing of the file f1
echo "Long listing of the file f1"
ls -l f1

# Display number of lines, characters of the file f1
echo "Number of lines and characters of the file f1"
wc f1

# Display all the hidden files in current directory
echo "Displaying all the hidden files in current directory"
ls -ld .?*
