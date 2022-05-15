#include<stdio.h> //9)Write a program in C to read any digit, display in the word
int main()
{
	int digit;
	printf("Enter a digit : ");
	scanf("%d",&digit);
	if (digit==1)
	   printf("one ");
	else if (digit==2)
	   printf("two ");
	else if (digit==3)
	   printf("three ");
	else if (digit==4)
	   printf("four ");
	else if (digit==5)
	   printf("five ");
	else if (digit==6)
	   printf("six ");
	else if (digit==7)
	   printf("seven ");
	else if (digit==8)
	   printf("eight ");
	else if (digit==9)
	   printf("nine ");
	else if (digit==0)
	   printf("zero ");
	return 0;
}