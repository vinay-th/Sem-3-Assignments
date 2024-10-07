#!/bin/sh
#  Write a shell script to find all the background and forground processes.

echo "Foreground Processes:"
ps -f | grep -v grep

echo "Background Processes:"
jobs
