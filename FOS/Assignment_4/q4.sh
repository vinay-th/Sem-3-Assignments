#!/bin/sh
# 4. Write a shell script that display disk file system in the following criteria:
# • Display file informaton of dummy files.
# • Display sizes in Human Readable Format.
df -h
# • Display information in KB.
df -k
# • Display information in MB.
df -m
# • Display information in GB.
df -BG
# • To check the file system type
df -T
# • To see the information of only device /home file system in human readable format.
df -h /home
