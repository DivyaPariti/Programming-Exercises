/*
Q-9 : Max_Value And Min_Value of DataType
Question Type: Coding
Problem Statement: Print the maximum and minimum values of signed long integer data type. These values are predefined in the header file "limits.h". It is defined with the variable name LONG_MAX and LONG_MIN
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<stdio.h>
#include<limits.h>
main()
{
 printf("Minimum value of signed integer is %ld\n",LONG_MIN);
 printf("Maximum value of signed integer is %ld",LONG_MAX);
}
