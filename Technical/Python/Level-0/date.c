/* Q - 10 : Date Validation
# Question Type: Coding
# Problem Statement
# Write a program to nd given a specic date ,check whether the date is valid or not. Year will be in range 1900 to 9999

# Input Format
# Accept three integer as a input

# Output Format
# Print the date is valid or not

# Constraints
 NA */
#include<stdio.h>
int main()
{
    int dd,mm,yy;
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if(yy>=1900 && yy<=9999)
    {
        if(mm>=1 && mm<=12)
        {
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Valid");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Valid");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Valid");
            else if(dd==29 && mm==2 && (yy%400==0 || (yy%4==0 && yy%100!=0)))
                printf("Valid");
            else
                printf("Invalid");
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        printf("Invalid");
    }
    
}