#!/bin/bash
userComment=$*
if [ -z $userComment ]
then
	cut -d';' -f3 | wc -l
else
	cut -d';' -f3 | grep -i $userComment | wc -l
fi

