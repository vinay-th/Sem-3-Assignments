#!/bin/sh
# 14. Write a shell script that will perform following commands:
# • Create a tar file that hold multiple folder in it.
mkdir folder1 folder2 extracted
touch folder1/1
touch folder1/2
touch folder1/3
touch folder1/1
touch folder1/2
touch folder1/3

tar -cvf archive.tar folder1 folder2
# • Execute the tar file that is created.
tar -xvf archive.tar -C extracted/
# • Show the table of content or view the contents of the tar file.
tar -tvf archive.tar
