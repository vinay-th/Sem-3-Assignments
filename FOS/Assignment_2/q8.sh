#!/bin/sh
# 8. Write a shell script to print even numbers from 1 to 100. Make use of continue keyword.

echo "Printing the even numbers from 1-100"

i=1
while [ $i -le 100 ]; do
    if [ $((i % 2)) -ne 0 ]; then
        i=$((i + 1))
        continue
    fi
    echo -n "$i "
    i=$((i + 1))
done

echo
