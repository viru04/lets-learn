#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    
    
    
    if (year%4==0)
    {
        printf("The year is a leap year");
    }
    else{

        printf("The year is not leap year");
    }
    
    
    
return 0;
}