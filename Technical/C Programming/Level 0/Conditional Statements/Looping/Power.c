/*
Q-4: Power Problem
Question Type: Coding
Problem Statement: Find whether the given number is power of 2 or not.
Input Format: Integer
Output Format: YES or NO
Constraints: NA
*/
#include<stdio.h>
main()
{
 int num;
 scanf("%d",&num);
 if(((num)&(num-1))==0)
 printf("YES");
 else
 printf("NO");
}
