#!/bin/bash

userName=$*
if [ -z $userName ]
then
	userName="martin"
fi
	cut -d: -f5 | cut -d' ' -f2 | grep -i ^$userName | wc -l
