#!/bin/sh
echo "i. Calendar of the current month and year."
echo "ii. terminal type"
echo "iii. User name, Users home directory."
echo "iv. current month"
echo "v. Machine name."
read opr

case $opr in
"1")
    echo "Calander of the month is: "
    cal
    ;;
"2")
    echo "Terminal type is: $TERM"
    ;;
"3")
    echo "Username : $USER\nHome : $HOME"
    ;;
"4")
    echo "Current month : $(cal)"
    ;;
"5")
    echo "Machinename is : $(hostname)"
    ;;
esac
