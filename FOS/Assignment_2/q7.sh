#!/bin/sh
# 7. Write a shell script to read number from user and print its multiplication table.

read -p "Enter the number whose table you want to print: " num

i=1
while [ $i -le 10 ]; do
    echo "$num * $i = $((num * i))"
    i=$((i + 1))
done
