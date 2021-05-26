/*
Q-6 : octal or hexadecimal number to decimal
Question Type: Coding
Problem Statement: Scan a number along with its base value. If a number starts with digit 0, it indicates a octal value. If a number starts with 0x it indicates that the number is a hexadecimal value. Print the corresponding decimal value.
Input Format: Octal or hexadecimal number
Output Format: The equivalent decimal value
Constraints: NA
*/
#include<stdio.h>
main()
{
 int a,b;
 scanf("%d",&b);
 if(b==8)
 {
 scanf("%o",&a);
 printf("%o",a);
 }
 if(b==16)
 {
    scanf("%x",&a);
    printf("%d",a);
 }
 
}
