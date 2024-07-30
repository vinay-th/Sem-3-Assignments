#!/bin/sh
# 3. Write a shell script to print a given number in reverse order. Make use of while loop.

read -p "Enter a number to reverse it: " num

revNum=0
while [ $num -gt 0 ]; do
    rem=$(($num % 10))
    revNum=$((revNum * 10 + rem))
    num=$((num / 10))
done

echo "The revrsed number is \033[036m$revNum"
