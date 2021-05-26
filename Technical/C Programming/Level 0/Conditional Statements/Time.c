/*
Q-7 : Time is valid or not
Question Type: Coding
Problem Statement: Write a program to check whether the time is valid or not
Input Format: Accept three integer as a input
Output Format: Valid or Not Valid
Constraints: NA
*/
#include<stdio.h>
main()
{
	int h,m,s;
	scanf("%d:%d:%d",&h,&m,&s);
	if((h>=0 && h<24) && (m>=0 && m<60) && (s>=0 && s<60))
	{
	 	printf("Valid");
	}
	else
	{
	 	printf("Not Valid");
	}
}
