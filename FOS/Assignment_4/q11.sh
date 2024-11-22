#!/bin/sh
# 11. Write a shell script that uncompresses the multiple files in new folder ,keeping the original files at their place.
mkdir -p uncompressed

cd compressed/

gunzip -c file1.txt.gz >../uncompressed/file1.txt
gunzip -c file2.txt.gz >../uncompressed/file2.txt
