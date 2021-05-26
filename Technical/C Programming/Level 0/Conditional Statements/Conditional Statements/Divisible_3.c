/*
Q-5: Divisible By 3
Question Type: Coding
Problem Statement: Given an integer value, if it is divisible by 3 print “Hi”, if it is divisible by 5 print “Hello”. If it is divisible by both print “HiHello”
Input Format: Enter the integer as a input
Output Format: Follow the format as sample output
Constraints: NA
*/
#include<stdio.h>
main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5!=0)
	printf("Hi");
	else if(a%5==0 && a%3!=0)
 	printf("Hello");
	else if(a%3==0 && a%5==0)
	printf("HiHello");
	else{}
}
