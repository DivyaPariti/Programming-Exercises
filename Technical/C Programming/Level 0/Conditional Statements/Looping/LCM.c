/*
Q-6 : LCM
Question Type: Coding
Problem Statement: Find the LCM of the given two numbers.
Input Format: Integer Integer
Output Format: Integer
Constraints: NA
*/
#include<stdio.h>
main()
{
 int n1,n2;
 scanf("%d %d",&n1,&n2);
 int max = n1>n2 ? n1:n2;
 while(1)
 {
	if(max % n1 ==0 && max%n2==0)
	{
		printf("%d",max);
		break;
 	}
	 ++max;
 } 
}
