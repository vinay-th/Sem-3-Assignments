#!/bin/sh
# 11. Write a shell script to find biggest of three numbers.
echo "Enter first number: "
read a
echo "Enter second number: "
read b
echo "Enter third number: "
read c

largest=$a

if [ $b -gt $largest ]; then
    largest=$b
fi
if [ $c -gt $largest ]; then
    largest=$c
fi

echo "The largest number is: $largest"
