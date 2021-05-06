#!/bin/sh
# shell scripting
# save  script arguments  and validate we have inputs ( or - could use $# - eq 0)
myprog=$1
if [ -z $myprog ]; then
echo "input program name to compile is required for this script"
exit 1

fi
# compile the program
echo "compile my program ... " $myprog
gcc $myprog.c -o$myprog.out
if [ $? -ne 0 ]; then

	echo"compile failed"
	exit 2
else 

	echo "done"
	
	
fi
# run the program
echo "running my program ..." $myprog
./$myprog.out
echo "done"
