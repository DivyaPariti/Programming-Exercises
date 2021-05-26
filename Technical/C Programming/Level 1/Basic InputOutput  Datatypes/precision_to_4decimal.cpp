/*
Q-8 : providing width space
Question Type: Coding
Problem Statement: Accept a float value and print it with width 20 and rounded off to 4 decimal places.
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<stdio.h>
main()
{
 float a;
 int n =20;
 scanf("%f",&a);
 printf("%*c",n,' ');
 printf("%.4f",a);
}
