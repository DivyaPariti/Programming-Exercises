/*
Q- 8 : Max_Value And Min_Value of DataType
Question Type: Coding
Problem Statement: Print the maximum and minimum values of signed character data type. These values are predefined in the header file "limits.h". It is defined with the variable name CHAR_MAX and CHAR_MIN
Input Format: NA
Output Format: NA
Constraints: NA
*/
#include<limits.h>
#include<stdio.h>
main()
{
 printf("Minimum value of signed character is %d\nMaximum value of signed character is %d",CHAR_MIN,CHAR_MAX);
}
