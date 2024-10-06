#!/bin/sh
# Write a shell script to create menu driven for the following task
# a. display dynamic real time view of running system
# b. display full format list of processes
# c. display your hostname on terminal
# d. display routing table

echo "Select an option:"
echo "1. Display dynamic real time view of running system"
echo "2. Display full format list of processes"
echo "3. Display your hostname on terminal"
echo "4. Display routing table"
echo "5. Exit"
read -p "Enter choice [1-5]: " choice
case $choice in
1) top ;;
2) ps -ef ;;
3) hostname ;;
4) route ;;
5) exit ;;
*) echo "Invalid choice!" ;;
esac
