#!/bin/sh

MY_VAR=0
echo "I made a variable and this is what's in it" $MY_VAR
while [ $MY_VAR -lt 10 ]
do
    echo $MY_VAR
    MY_VAR=`expr $MY_VAR + 1`
done
#./a.out hello these are args!