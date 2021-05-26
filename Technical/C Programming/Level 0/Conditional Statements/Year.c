/*
Q-10 : Year
Question Type: Coding
Problem Statement: Write a program to find given a specific date ,check whether the date is valid or not. Year will be in range 1900 to 9999
Input Format: Accept three integer as a input
Output Format: Print the date is Valid or Invalid
Constraints: NA
*/
#include<stdio.h>
main()
{
	int d,m,y;
	scanf("%d/%d/%d",&d,&m,&y);
	if(y<1990 || y>9999)
		printf("Invalid");
	if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
		printf("Valid");
	else if((m==4 || m==6 || m==9 || m==11)&& (d>=1 && d<=31))
		printf("Valid");
	else if((m==2 && d==29)&&((y%4==0 && y%100!=0) || y%400==0))
		printf("Valid");
	else if(m==2 && d>=1 && d<=28)
		printf("Valid");
	else
		printf("Invalid");

}
