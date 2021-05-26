/*
Q-4 : Max_Value And Min_Value of DataType
Question Type: Coding
Problem Statement: Print the maximum and minimum values of unsigned long long integer data type.These values are defined in "limits.h" header files. The value is stored in the variable ULLONG_MAX.
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<stdio.h>
#include<limits.h>
main()
{
printf("Minimum value of unsigned long long integer is 0\n");
printf("Maximum value of unsigned long long integer is %llu",ULLONG_MAX);
}
