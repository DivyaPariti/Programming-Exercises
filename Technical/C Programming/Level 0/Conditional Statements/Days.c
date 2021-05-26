/*
Q-8 : Days
Question Type: Coding
Problem Statement: Write a program to print corresponding day based on given input
Input Format: Accept integer as a input
Output Format: Print corresponding day or invalid
Constraints: NA
*/
#include<stdio.h>
main()
{
	int d;
	scanf("%d",&d);
	switch(d)
	{
		case 0:
		 printf("Sunday");
		 break;
		case 1:
		 printf("Monday");
		 break;
		case 2:
		 printf("Tuesday");
		 break;
		case 3:
		 printf("Wednesday");
		 break;
		case 4:
		 printf("Thursday");
		 break;
		case 5:
		 printf("Friday");
		case 6:
		 printf("Saturday");
		 break;
		default:
		 printf("Invalid");
	}
}
