#!/bin/bash

commentMessage=$*
if [ -z $commentMessage ]
then
	commentMessage="No comment"
fi

git add *
git commit -m "$commentMessage"
git push
 