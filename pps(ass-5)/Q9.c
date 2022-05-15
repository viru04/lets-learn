#include <stdio.h>
int main()
{
    int num,r,s=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while (num!=0)
    {
        r=num%10;
        s=s+r;
        num=num/10;
    }
    printf("The sum of the digits in the number is:%d",s);
    
return 0;
}