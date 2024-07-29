#!/bin/sh
# 10. Write a shell script to find biggest of two numbers.

echo "Enter the first number: "
read a

echo "Enter the second number: "
read b

if ($a -gt $b); then
    echo "First number: $a is bigger than $b"
else
    echo "Second number: $b is bigger than $a"
fi
