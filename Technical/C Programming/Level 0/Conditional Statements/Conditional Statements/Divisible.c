/*
Q-4 : Divisible
Question Type: Coding
Problem Statement: Given an integer value, check the given input is divisible by 3. If it is divisible print the message "The number is divisible by 3".if it is not divisible print the message "The number is not divisible by 3 and gives a remainder _".
Input Format: Enter the integer as a input
Output Format: Follow the format as sample output
Constraints: NA
*/
#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    printf("The number is divisible by 3");
    else
    printf("The number is not divisible by 3 and gives a remainder %d",n%3);
}
