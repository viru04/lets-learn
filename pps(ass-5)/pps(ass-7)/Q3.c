
#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the temperature in centigrade : ");
	scanf("%d",&temp);
	if (temp<=10)
       printf("Very Cold weather");
    else if (temp<=20)
       printf("Cold weather");
    else if (temp<=30)
       printf("Normal in Temp");
    else if (temp<=40)
       printf("Its Hot");
    else if (temp>40)
       printf("Its Very Hot");
    return 0;
}
