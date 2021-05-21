#!/bin/bash
name=$1

if [[ -n "$name" ]]; then
	cd "/home/shivang/Projects/C++/Samples/$name/" 
	for input in *; do
		if [ "$input" = "output.txt" ]; then
			continue
		fi
		echo "For $input my output is"
		echo "==============================================="
		"/home/shivang/Projects/C++/Contest/$name" < "$input" > "output.txt"
		cat output.txt
		echo "==============================================="
		if diff -Z output.txt "/home/shivang/Projects/C++/Samples/Outputs/$name/ans${input:2:1}.txt" &>/dev/null; then
			tput setaf 6; echo "Success !!! All test cases passed"
		else
			if [[ $input == *"in"* ]]; then
				tput setaf 1;echo "Not all testcases are same as given"
			fi
		fi
		tput setaf 7
    done
else
    echo "No file provided"
fi
echo "
------------------
(program exited with code: $?)
Press return to continue"
read line
