#!/bin/sh
echo "To read a file "
echo "Enter the name of the file: "
read file
cat $file

# Version of unix
echo "The version of unix is: $(uname -a)"

# to get help about cat command
echo "help about cat command:"
man cat

# 3 line print
echo "This is a \nthree line \ntext message"
