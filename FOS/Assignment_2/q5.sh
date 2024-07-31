#!/bin/sh
# Script to check if a number is prime or not. Make use of break keyword.

read -p "Enter a number to check if it is prime: " num

i=2
flag=1

while [ $i -le $((num / 2)) ]; do
    if [ $((num % i)) -eq 0 ]; then
        flag=0
        break
    fi
    i=$((i + 1))
done

if [ $flag -eq 0 ]; then
    echo "Your number is not prime"
else
    echo "Your number is prime"
fi
