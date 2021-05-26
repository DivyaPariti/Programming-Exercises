/*
Q-6 : Max_Value And Min_Value of DataType
Question Type: Coding
Problem Statement: Print the maximum and minimum values of signed long long integer data type. These values are predefined in the header file "limits.h". It is defined with the variable name LLONG_MAX and LLONG_MIN
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<stdio.h>
#include<limits.h>
main()
{
 printf("Minimum value of signed long long integer is %lld\n",LLONG_MIN);
 printf("Maximum value of signed long long integer is %lld",LLONG_MAX);
}
