#!/bin/sh
# 10. Write a shell script to accept a number and check how many digits it contain and find sum of all digits.

read -p "Enter a number: " num

rem=0
sum=0
count=0

while [ $num -ne 0 ]; do
    rem=$((num % 10))
    sum=$((sum + rem))
    count=$((count + 1))
    num=$((num / 10))
done

echo "Your number has $count no of digits and the sum of all digits is $sum"
