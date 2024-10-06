#!/bin/sh
# Write a shell script to create menu driven for the following task -
# ping a network
# 1. retrieve dns name servers
# 2. check the mount version
# 3. display all the running jobs
# 4. display process not assosciated with terminal

echo "Select an option:"
echo "1. Retrieve DNS name servers"
echo "2. Check mount version"
echo "3. Display all the running jobs"
echo "4. Display process not assosciated with terminal"
echo "5. Exit"
read -p "Enter choice [1-5]: " choice
case $choice in
1) cat /etc/resolv.conf | grep nameserver ;;
2) mount -V ;;
3) jobs -l ;;
4) ps -aux | awk '$7 == "?" {print}' ;;
5) exit ;;
*) echo "Invalid choice!" ;;
esac
