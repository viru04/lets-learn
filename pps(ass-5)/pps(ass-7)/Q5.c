#include<stdio.h>
int main()
{
	char name[20];
	int customer_ID,units;
	float amount,subcharge;
	printf("Customer ID NO. : ");
	scanf("%d",&customer_ID);
	printf("Customer Name : ");
	scanf("%s",&name);
	printf("%s",name);
	printf("Units consumed : ");
	scanf("%d",&units);
	if (units<200) 
	{
		amount = units*1.20;
		if (amount>=100)
		    printf("Amount Charges @Rs. 1.20 per unit : %.2f\n",amount);
	}
	else if (units<400) 
	{
		amount = units*1.50;
		printf("Amount Charges @Rs. 1.50 per unit : %.2f\n",amount);
	}
	else if (units<600) 
	{
		amount = units*1.80;
		printf("Amount Charges @Rs. 1.80 per unit : %.2f\n",amount);
	}
	else if (units>600) 
	{
		amount = units*2.0;
		printf("Amount Charges @Rs. 2.00 per unit : %.2f\n",amount);
	}
	if (amount>400) 
	{
		subcharge = amount*0.15;
	    printf("Surchage Amount : %.2f\n",subcharge);
	    printf("Net Amount Paid By the Customer : %.f\n",amount+subcharge);
	}
	return 0;
}