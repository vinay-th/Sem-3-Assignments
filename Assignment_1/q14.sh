#!/bin/sh

echo "You can perform 2 operations->\n"
echo "1. Volume of cube"
echo "2. Fahrenheit to Celcius\n"

read -p "Enter your selection: " opr

case $opr in
1)
    read -p "Enter the side of the cube: " side
    echo "\nThe volume of $side cube is $(($side * $side * $side))"
    ;;
2)
    read -p "Enter the temprature in fahrenheit: " fhr
    cel=$((($fhr - 32) / (9 / 5)))
    echo "\nTemprature $fhr is $cel°C"
    ;;
esac
