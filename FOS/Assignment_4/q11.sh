#!/bin/sh
# 11. Write a shell script that uncompresses the multiple files in new folder ,keeping the original files at their place.
mkdir -p uncompressed

gunzip file1.gz file2.gz
mv file1.txt uncompressed
mv file2.txt uncompressed
