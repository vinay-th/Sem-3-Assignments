echo "Enter bigger number: "
read big
echo "Enter smaller number: "
read small
echo "\n\n\n"

while [ $big -ge $small ]
do
	echo "$big"
	big=$((big - 1))
done