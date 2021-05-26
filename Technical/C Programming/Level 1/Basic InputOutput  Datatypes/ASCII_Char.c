/*
Q-2 : ASCII value to Character
Question Type: Coding
Problem Statement: Accept a integer value and print the corresponding character associated with the integer value. If the integer value is beyond ASCII range, print the output as "Invalid Input".
Input Format: Integer value indicating the ASCII value to be evaluated
Output Format: Given integer:Corresponding character
Constraints: NA
*/
#include<stdio.h>
main()
{
    int n;
    char ch = (char)n;
    scanf("%d",&n);
    if((n>=65 && n<=90) || (n>=97 && n<=122))
    {
        printf("%d:%c",n,ch);
    }
    else
    {
        printf("%d:Invalid Input",n);
    }
}
