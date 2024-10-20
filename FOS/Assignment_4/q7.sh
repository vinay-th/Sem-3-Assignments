#!/bin/sh
# 7. Write a shell script that uncompresses the two file separetely.
echo "Uncompressing file1.gz:"
gunzip file1.gz
echo "Uncompressing file2.gz:"
gunzip file2.gz
rm file1.gz
rm file2.gz
