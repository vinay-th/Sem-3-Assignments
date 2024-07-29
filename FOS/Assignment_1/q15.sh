#!/bin/sh
# 14. An employee Basic salary is input through keyboard where da is 40% of basic salary and hra is 20% of basic salary. Write a program to calculate gross salary.
read -p "Enter the basic salary: " basic

da=$(( basic * 40 / 100 ))
hra=$(( basic * 20 / 100 ))

echo "\nThe net salary is : $((basic + da + hra))"
