echo "Enter the number of rows: "
read rows
echo "\n\n"
i=1
no=1
while [ $i -le $rows ]
do
    j=1
    while [ $j -le $i ]
    do
        echo -n "$no "
        j=$((j + 1))
        no=$((no + 1))
    done
    echo
    i=$((i + 1))
done
