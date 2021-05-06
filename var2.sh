#!/bin/sh

# create a variable and export it for this shell as well as all other processes
MYVAR="This is a test"
export MYVAR;
echo "####################### "
echo "########################### var1.sh ############# "
echo "####################### "

printenv

# call another script

exec ./var2.sh # run in same process and wait for it to complete
exit 0 
