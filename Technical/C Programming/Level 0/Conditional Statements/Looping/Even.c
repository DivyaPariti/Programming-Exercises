/*
Q-3: EVEN Numbers
Question Type: Coding
Problem Statement: Print all the even numbers in the given range.
Input Format: Accept a start and ending limit as integer
Output Format: Set of Integers
Constraints: NA
*/
#include<stdio.h>
main()
{
 int n1,n2,i;
 scanf("%d %d",&n1,&n2);
 for(i=n1;i<=n2;i++)
 {
    if(i%2==0)
    printf("%d ",i);
 }
}
