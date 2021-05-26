/* Q - 7 : Time Validation
# Question Type: Coding
# Problem Statement
# Write a program to check whether the time is valid or not

# Input Format
# Accept three integer as a input

# Output Format
# Valid or Not Valid

# Constraints
# NA */
#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d:%d:%d", &h,&m,&s);
    if(((h>24) || (h<0) || ((m>60) || (m<0)) || ((s>60)) || (s<0)))
    {
        printf("Not Valid");
    }
    else
    {
        printf("Valid");
    }
    return 0;
}
