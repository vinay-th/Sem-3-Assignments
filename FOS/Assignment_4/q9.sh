#!/bin/sh
# 9. Write a shell script that uncompresses the folder files separetely.
folder=NewFolder
for file in "$folder"/*; do
    gunzip $file
done
