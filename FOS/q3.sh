echo "Enter the filename: "
read fileName
touch fileName

echo "---------------------File edit------------------------"
cat >$fileName
echo "Done successfuly"
echo "\n\n\n---------------------File content------------------------"
cat $fileName

echo "\n\nThe version of UNIX"
lsb_release -a

echo "\n\nThe help for cat command\n\n"
cat --help	

echo "this is a \nthree \n–lineText message"