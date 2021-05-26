/*
Q-6: Leap Year
Question Type: Coding
Problem Statement: Given a year, check whether it is a leap year
Input Format: Enter the integer as a input
Output Format: Leap year or Not a Leap year
Constraints: NA
*/
#include<stdio.h>
main()
{
	int y;
	scanf("%d",&y);
	if((y%4==0 && y%100!=0) || y%400==0)
	printf("Leap year");
	else
	printf("Not a Leap year");

}
