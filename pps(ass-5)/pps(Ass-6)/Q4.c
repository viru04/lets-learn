
   #include<stdio.h>
int main()
{
	int a; //a=no of units consumed by user
	float c;
	printf("Enter the number of units consumed by user\n");
	scanf("%d",&a);
	if (a<=100)
	{
	 	c=a*0.80;
	    printf("The charges = %.2f\n",c);
	}
	else
	{
	 	c=((a-100)*0.90) + 100*0.80;
	    printf("The charges = %.2f\n",c);
	}
	return 0; 
} 
    

