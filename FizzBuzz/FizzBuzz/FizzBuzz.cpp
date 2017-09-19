/*

Coding competence check #1

Develop a FizzBuzz application which counts from 1-100
	- For multiples of 3 replace the number with Fizz
	- For multiples of 5 replace the number with Buzz
	- For multiples of 3 & 5 replace the number with FizzBuzz

	Author: Lee Walker
	Date: 19/09/17

	Inspiration for this idea: https://blog.codinghorror.com/why-cant-programmers-program/

	123123

*/

#include "stdafx.h"
#include "stdio.h"
#include "iostream"


int main()
{
	int i = 0;

	for (i = 1; i <= 100; i++) {
		if ((i % 3 == 0) & (i % 5 == 0)) {
			printf("FizzBuzz \n");
		}
		else if (i % 3 == 0) {
			printf("Fizz \n");
		}
		else if (i % 5 == 0) {
			printf("Buzz \n");
		}
		else{
			printf("%d \n", i);}
		
	}
	system("PAUSE");
	return 0;
}

