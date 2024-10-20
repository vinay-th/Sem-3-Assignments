#!/bin/sh
# 10. Write a shell script to sort student file according to name and store it in another file.
sort -t '|' -k 2,2 student.txt >demo.txt
cat demo.txt
