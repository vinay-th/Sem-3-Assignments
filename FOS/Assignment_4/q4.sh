#!/bin/sh
# 4. Write a shell script that display disk file system in the following criteria:
# • Display file informaton of dummy files. • Display sizes in Human Readable Format.
# • Display information in KB. • Display information in MB.
# • Display information in GB. • To check the file system type
# • To see the information of only device /home file system in human readable format.4
echo "File system information:"
df -h
echo "File system information in KB:"
df -k
echo "File system information in MB:"
df -m
echo "File system information in GB:"
df -h --block-size=G
echo "File system type:"
df -T
echo "File system information of /home:"
df -h /home
