#!/bin/sh
# 8. Write a shell script that compresses the folder files separetely.
folder=folder
for file in "$folder"/*; do
    if [ -f "$file" ]; then
        echo "Compressing $file:"
        gzip $file
    fi
done
