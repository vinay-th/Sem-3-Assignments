#!/bin/sh
#To create a file to store name and the age

echo "Please enter your name: "
read name

echo "Enter your age: "
read age

echo "Enter your address: "
read addr

echo "Name: $name\nAge: $age\nAddress: $addr" >text

# Contents of the file
echo "\n\nThe content of the created file is: \n\n"
cat text

# To display the version of OS
echo "\n\nThe version of your OS is: "
uname -a
