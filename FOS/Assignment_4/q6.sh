#!/bin/sh
# 6. Write a shell script that compresses the two file separetely.
touch file1.txt
touch file2.txt
gzip file1.txt
gzip file2.txt
