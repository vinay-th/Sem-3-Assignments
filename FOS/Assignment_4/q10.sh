#!/bin/sh
# 10. Write a shell script that compresses the multiple files in new folder ,keeping the original files at their place.
touch file1.txt file2.txt
mkdir -p compressed

gzip -c file1.txt >compressed/file1.txt.gz
gzip -c file2.txt >compressed/file2.txt.gz
