#!/bin/sh
# 19. Save the list of all the files using output redirection into a file named “File_list”and make this “File_list” an executable file only. Then check for that file in another script if it is readable, writable or executable or not.

touch File_list.txt

ls -l >File_list.txt

chmod +x File_list.txt

[ -r File_list.txt ] && echo "Your file is readable" || echo "Your file is not readable"
[ -w File_list.txt ] && echo "Your file is writable" || echo "Your file is not writable"
[ -x File_list.txt ] && echo "Your file is excecutable" || echo "Your file is not excecutable"
