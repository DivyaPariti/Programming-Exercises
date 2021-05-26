/*
Q-8 : Multiplication
Question Type: Coding
Problem Statement: Multiply the given two numbers without using * operator.
Input Format: Integer Integer
Output Format: Integer
Constraints: NA
*/
#include<stdio.h>
main()
{
 int n1,n2,res=0;
 scanf("%d %d",&n1,&n2);
 while(n2>0)
 {
	res = res + n1;
	n2--;
 }
 printf("%d",res);
}
