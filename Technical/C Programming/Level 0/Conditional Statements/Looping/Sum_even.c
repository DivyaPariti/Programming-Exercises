/*
Q- 9 : Sum of even numbers
Question Type: Coding
Problem Statement: Find the sum of even numbers in the given range.
Input Format: Integer
Output Format: Integer
Constraints: NA
*/
#include<stdio.h>
main()
{
 int n,i,sum=0;
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
	if(i%2==0)
	sum = sum + i;
 }
 printf("%d",sum);
}
