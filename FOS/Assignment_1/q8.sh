#!/bin/sh
# 8. Write a shell script to create two files f1 and f2 and perform the following operation.
# • Compare these two files.
# • Display the difference of these two files.
# • Display the common between these two files.

# comapring diffrence in two files
cd temp
echo "Making f1 and f2 files"
touch f1
touch f2

echo "Sample text for f1" >f1
echo "Sample text for f2" >f2

echo "Comparing the f1 and f2 files"
diff f1 f2
echo

# displaying common the files
echo "Diffrence between f1 and f2"
comm f1 f2
