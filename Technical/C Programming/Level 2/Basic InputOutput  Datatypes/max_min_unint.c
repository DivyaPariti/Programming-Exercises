/*
Q-1 : Max_Value And Min_Value of DataType
Question Type: Coding
Problem Statement: Print the maximum and minimum value of unsigned integer. These values are predefined in the header file "limits.h". It is defined with the variable name UINT_MAX
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<stdio.h>
#include <limits.h>
main()
{
    printf("Minimum value of unsigned integer is 0\n");
    printf("Maximum value of unsigned integer is %ld",UINT_MAX);
}
