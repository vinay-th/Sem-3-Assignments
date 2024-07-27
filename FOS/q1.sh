#!/bin/sh
echo "To shoe hidden files in the directory: "
ls -ld .?*
# 2) Deleting directory
echo "To delete a directory: "
echo "1) Delete an existing dir"
echo "2) Delete a temp dir"

read opr
case $opr in
"1")
    echo "Enter the name of dir: "
    read dir
    rm -rf $dir
    ;;
"2")
    echo "Enter the name of dir: "
    read dir
    mkdir $dir
    rm -rf $dir
    echo "Deleted successfully"
    ;;
esac

# To move a file in another folder
echo "To move a file in another folder"
echo "1) To move existing file"
echo "2) To move temporary file by creating"
read opr

case $opr in
"1")
    echo "Enter the name of file: "
    read file
    echo "Enter the name of directory: "
    read dir
    mv $file $dir
    ;;
"2")
    echo "Enter name of file to create: "
    read file
    touch $file
    echo "Enter name of temp directory: "
    read dir
    mkdir $dir
    mv $file $dir
    ;;
esac

echo "TempFile $file stored into temp $dir"
