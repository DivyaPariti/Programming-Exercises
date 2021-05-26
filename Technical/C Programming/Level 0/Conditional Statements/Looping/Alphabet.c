/*
Q-10 : Alphabet
Question Type: Coding
Problem Statement: Print all the alphabets for given n times.
Input Format: Integer
Output Format: All the alphabets
Constraints: NA
*/
#include <stdio.h>
main()
{
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
	for(char ch='a';ch<='z';++ch)
	{
	 printf("%c ",ch);
	}
	printf("\n");
 }
}
