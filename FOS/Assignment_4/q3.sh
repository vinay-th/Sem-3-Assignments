#!/bin/sh
# 3. Write a shell script that display disk space used by files in the following criteria:
# • write counts for all files , not just directories
# • total count
echo "Total space used by files:"
du -a
echo "Total count:"
du -c
