#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    if (num%7==0)
    {
        printf("The number is divisible by 7");
    }
    else{
        printf("The number is not divisible by 7");
    }
    
return 0;
}