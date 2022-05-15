//8)Write a program in C which is a Menu-Driven Program to perform a simple calculation.
#include<stdio.h>
int main()
{
	int num;
	float a,b;
	
	scanf("%d",&num);
	printf("Enter first number\n");
	scanf("%f",&a);
	printf("Enter second number\n");
	scanf("%f",&b);
	switch (num) {
		case 1:    printf("%.2f + %.2f = %.2f \n",a,b,a+b);
		           break;
		case 2:    printf("%.2f - %.2f = %.2f \n",a,b,a-b);
		           break;
		case 3:    printf("%.2f * %.2f = %.2f \n",a,b,a*b);
		           break;
		case 4:    printf("%.2f / %.2f = %.2f \n",a,b,a/b);
		           break;	
		default :  printf("Error! Enter valid operator\n");
	}
	return 0;
}