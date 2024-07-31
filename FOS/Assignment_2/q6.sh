#!/bin/sh
# 6. Write a shell script to find factorial of a number.

read -p "Enter a number to find it's factorial: " num

fact=1
i=1
while [ $i -le $num ]; do
    fact=$((fact * i))
    i=$((i + 1))
done

echo "The factorial of $num is $fact"
