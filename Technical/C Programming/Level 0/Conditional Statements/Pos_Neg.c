/*
Q-3 : Conditional Statement
Question Type: Coding
Problem Statement: Given an integer input , whether the given input is "Positive" or "Negative" or "Zero" and print the corresponding message
Input Format: Enter the integer as a input
Output Format: Negative or Positive or Zero
Constraints: NA
*/
#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    printf("Positive");
    else if(n<0)
    printf("Negative");
    else
    printf("Zero");
}
