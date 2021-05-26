/*
Q-5 : nearest integer
Question Type: Coding
Problem Statement: Display the given float value as the nearest integer value
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<stdio.h>
#include<math.h>
main()
{
 float a;
 scanf("%f",&a);
 float b = round(a);
 printf("%d",int(b));
}
