#!/bin/sh
# 18. Check the current working directory and who is the user then make a directory and a file in it named as “Demo.sh”. Change its permission to make it executable and then rename that file with “New_file.sh”.

echo "The current directory is \033[36m$(pwd) \033[0m"

echo "The current user is \033[36m$(whoami)\033[0m"

echo "Making a file named Demo.sh"

touch demo.sh

# changing it to excecutable
chmod +x demo.sh

# renaming file
mv demo.sh New_file.sh

# listing permissions again
ls -l New_file.sh
