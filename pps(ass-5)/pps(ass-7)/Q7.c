//7)Write a program in C to read any day number in integer and display day name in the word
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a day number : ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:   printf("Monday");
		          break;
		case 2:   printf("Tuesday");
		          break;
		case 3:   printf("Wednesday");
		          break;
		case 4:   printf("Thursday");
		          break;
		case 5:   printf("Friday");
		          break;
		case 6:   printf("Saturday");
		          break;
		case 7:   printf("Sunday");
		          break;
		default : printf("Invalid input");
	}
}