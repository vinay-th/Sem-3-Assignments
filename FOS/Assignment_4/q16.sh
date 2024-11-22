#!/bin/sh
# 16. Perform the following commands to locate or search the files.
# • Find files using name in the Current Directory
find . -type f -name filename
# • Find directories using name
find . -type d -name dirname
# • Find C files and .txt using name
find . -type f \( -name "*.c" -o -name "*.txt" \)
# • Find all files with paricular extension
find . -type f -name "*.extension"
# • Find all files with starting with A-Z capital letters.
find . -type f -name "[A-Z]*"
# • Find files with read ,write and execute permission.
find . -type f -perm -u=rwx
# • Find files without read ,write and execute permission.
find . -type f ! -perm -u=rwx
# • Find Read Only files
find . -type f -perm 444
# • Find Read & Write Files
find . -type f -perm 664
# • Find all Hidden Files.
find . -type f -name ".*"
