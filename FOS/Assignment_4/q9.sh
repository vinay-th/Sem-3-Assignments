#!/bin/sh
# 9. Write a shell script that uncompresses the folder files separetely.
folder=folder
for file in "$folder"/*; do
    echo "Uncompressing : $file"
    gunzip $file
done
