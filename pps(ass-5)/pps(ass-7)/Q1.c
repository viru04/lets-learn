#include <stdio.h>
int main()
{
    int num1,num2;
	
	printf("Enter the first integer : ");
	scanf("%d",&num1);
	printf("Enter the second inetegr : ");
	scanf("%d",&num2);
	
	if ( num1 == num2 )
    	printf("\nThey are equal\n");
	else
		printf("\nThey are not equal\n");
    
return 0;
}