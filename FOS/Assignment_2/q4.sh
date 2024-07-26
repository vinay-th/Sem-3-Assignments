echo "Enter time in (24 hrs format): "
read time

if [ $time -ge 20 -o $time -le 3 ]
then
	echo "Good Night $time:00"
fi
if [ $time -ge 4 -a $time -le 10 ]
then
	echo "Good Morning $time:00"
fi
if [ $time -ge 11 -a $time -le 16 ]
then
	echo "Good Afternoon $time:00"
fi
if [ $time -ge 16 -a $time -le 19 ]
then
	echo "Good Evening $time:00"
fi