#!/bin/sh
# 8. Write a shell script that compresses the folder files separetely.
folder=folder
for file in "$folder"/*; do
    echo "Compressing $file:"
    gzip $file
done
