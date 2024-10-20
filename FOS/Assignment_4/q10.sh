#!/bin/sh
# 10. Write a shell script that compresses the multiple files in new folder ,keeping the original files at their place.
touch file1.txt file2.txt
mkdir -p compressed

gzip file1.txt file2.txt
mv file1.txt.gz compressed
mv file2.txt.gz compressed
