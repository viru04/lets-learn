//4)Write a C program to check whether a character is an alphabet, digit or special character
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
	    printf("You have entered a alphabet");
	else if (ch <= '9' && ch >= '0')
	    printf("You have entered a digit");
	else
	    printf("You have enetered a special character");
	return 0;
}