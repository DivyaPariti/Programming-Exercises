/*
Q-2 : ODD Numbers
Question Type: Coding
Problem Statement: Print all the Odd numbers from 1 to n.
Input Format: Integer
Output Format: Set of Integers
Constraints: NA
*/
#include<stdio.h>
main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
}
