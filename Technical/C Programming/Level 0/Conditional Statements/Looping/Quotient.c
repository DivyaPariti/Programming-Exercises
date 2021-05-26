/*
Q-7: Quotient
Question Type: Coding
Problem Statement: Divide the given two numbers and print the quotient without using / operator.
Input Format: Integer Integer
Output Format: Integer
Constraints: NA
*/
#include<stdio.h>
main()
{
 int divd,divs,q=0;
 scanf("%d %d",&divd,&divs);
 while(divs<=divd)
 {
	divd = divd - divs;
	q++;
 }
 printf("%d",q);
}
