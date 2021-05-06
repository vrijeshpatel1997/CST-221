#!/bin/sh
echo "compiling my program..."
gcc helloworld.c -ohelloworld.out
echo "Done"


echo "running my program..."
./helloworld.out
echo "done"
