/*
Q-5 : Multiplication
Question Type: Coding
Problem Statement: Print the multiplication table as per the multiplicant and n.
Input Format: Integer Integer
Output Format: Integer * Integer = Integer
Constraints: NA
*/
#include<stdio.h>
main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n2;i++)
    {
        printf("%d * %d = %d\n",i,n1,(i*n1));
    }
}
