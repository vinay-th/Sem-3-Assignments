# hidden files 
echo"These are hiddden files"
ls -ld .?*

#delete directory
echo "Enter the name of directory that you want to delete: "
read fileName
rm -rf $fileName
echo "Deleted successfully"

#move files
echo "Enter the name of file you want to move: "
read fileName
echo "Enter the directory where to move: "
read direc
mv $fileName $direc
echo "Moved successfully"
