*This project has been created as part of the 42 curriculum by capeinad*

## Description

In this project we are given an unordered list of numbers. This list may contain negative numbers. You must check that no other thing than numbers are given.
This programm sorts the list from the lowest value to the highest. We have some limitations in the number of operations used to sort them. For getting the maximum mark (100%), your algorithm must:

	Sort 100 random numbers in fewer than 700 operations.
	Sort 500 random numbers in no more than 5500 operations.

The output only contains the operations that needs to be done for achieveing the goal, followed each one by a new line.

It does not accept duplicates in the list, or invalid input, which is checked on stderr.

## Instructions

For compiling, you must write "make" in the command line. For executing, write "./push_swap" followed by a list of numbers that works as argument, or fix the value of ARG previously to avoid confussion.

For counting lines to know the operations done, write on the same line " | wc -l".

For evaluating the results, you will be given a binary file that executes at the same time and outputs "OK" or "KO".

It will work as follows:

			$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
			6
			$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
			OK

## Resources

This webpage came to be very helpful to visualize the different moves taken, so you can see with your own input and output what is happening while you sort and build the rules of your algorithm. It is very usefull so you don't have to invert more time creating your own visualizer to see if it's working or don't: https://codepen.io/ahkoh/full/bGWxmVz



## Technical Choices

I started this project using the RADIX algorithm, because I understood quite well how it worked. But in my tests didn't show as the optimum solution, it used a bunch more number of operations than I expected. I did some research and discovered others algorithms, like Turk. I finally used Ksort because it is the more visual to understand and to follow the steps taken. 
