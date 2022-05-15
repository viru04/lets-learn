#include <stdio.h>
int main()
{
    int roll_number,subject1,subject2,subject3;
	char name;
	float percentage;
	printf("Enter the name of student : ");
	scanf("%s",&name);
	printf("Enter the roll number of student : ");
	scanf("%d",&roll_number);
	printf("Enter the marks of subject1 : ");
	scanf("%d",&subject1);
	printf("Enter the marks of subject2 : ");
	scanf("%d",&subject2);
	printf("Enter the marks of subject3 : ");
	scanf("%d",&subject3);
	percentage=(float)(subject1+subject2+subject3)/3;
	printf("Total marks obtained : %d\n",subject1+subject2+subject3);
	printf("Percentage : %.2f\n",percentage);	
	if (percentage>75)
	   printf("Division A\n");
	else if (percentage>50)
	   printf("Divison B\n");
	else
	   printf("Divison C\n");
    
return 0;
}