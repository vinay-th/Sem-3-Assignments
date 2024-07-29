#!/bin/sh
# 12. Write a shell script for a simple calculator to perform addition, subtraction, multiplication, division using case statements.
read -p "Enter first number: " a
read -p "Enter second number: " b

echo "\nTo perform following operations->\n"
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication \n"
read -p "Enter the number of operation: " opr

case $opr in
1)
    echo "Addition is : $(($a + $b))"
    ;;
2)
    echo "Subtraction is : $(($a - $b))"
    ;;
3)
    echo "Multiplication is : $(($a * $b))"
    ;;
esac
