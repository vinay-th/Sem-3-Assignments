#!/bin/sh
# 8. Write a shell script that compresses the folder files separetely.
folder=NewFolder
for file in "$folder"/*; do
    gzip $file
done
