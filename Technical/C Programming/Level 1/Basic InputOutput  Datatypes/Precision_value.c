/*
Q-10 : precision value
Question Type: Coding
Problem Statement: Accept a float value and precision value and print the float value according to the precision given
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<stdio.h>
main()
{
 float a;
 int p;
 scanf("%f %d",&a,&p);
 printf("%.*f",p,a);
}
