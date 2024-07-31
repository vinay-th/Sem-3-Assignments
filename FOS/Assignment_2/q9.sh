#!/bin/sh
# 9. Write a shell script to print odd numbers from 1 to 100 making use of until loop.

i=1

until [ $i -gt 100 ]; do          # Changed condition to check if i is greater than 100
    if [ $((i % 2)) -ne 0 ]; then # Check if i is odd
        echo -n "$i "             # Print the odd number
    fi
    i=$((i + 1))
done
