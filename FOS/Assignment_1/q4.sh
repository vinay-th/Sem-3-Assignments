#!/bin/sh
echo "Enter your basic salary: "
read basic

bs=$(expr $basic)

da=$(expr $basic \* 60 / 100)
hra=$(expr $basic \* 20 / 100)
it=$(expr $basic \* 15 / 100)
ma=100

gross=$(expr $basic + $hra + $da + $it + $ma)

echo "Your gross salary came to be: $gross"
