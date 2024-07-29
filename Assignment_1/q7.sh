#!/bin/sh
# 7. Write a shell script to
# a. create a directory gls
# b. create subdirectory college in gls directory
# c. create a file f1 in college directory.
# d. copy this f1 file into home directory.

# to create gls dir
echo "To create a \"gls\" directory"
cd .temp
mkdir gls
echo "You created a gls directory\n\n"

# to create a subdirectory
echo "To create a subdirectory in \"gls\" directory"
cd gls
mkdir college
echo "You created a college directory in gls directory\n\n"

# to create f1 file in college
echo "Creating a file f1"
cd college
touch f1.txt

# to copy file into home
echo "Copying the f1 file into the home dir"
cp f1.txt ../..
