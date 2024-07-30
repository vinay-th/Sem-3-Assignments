#!/bin/sh
# 17. Create a file named “First_shell” using cat command. Check if this file is readable, writable and executable or not. If it is not executable then make it executable and then list out all the files and see if it became execuatble
cat >First_shell <<EOF
#!/bin/sh

echo "Hello world!"

EOF

# all permissions of that file
ls -l First_shell

# read and write and excecutable check
[ -r First_shell ] && echo "Your file is readable" || echo "your file is not readable"
[ -w First_shell ] && echo "Your file is writable" || echo "your file is not writable"
[ -x First_shell ] && echo "Your file is excecutable" || echo "your file is not excecutable"
