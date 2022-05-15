#include <stdio.h>
int main()
{
    int month, days;
    printf("Enter the month number:");
    scanf("%d", &month);
    if (month == 2)
        printf("the entered month has 29 days if its a leap year\nor 28 days if not a leap year");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("the entered month has 30 days");
    else
        printf("the entered month has 31 days");
    return 0;
}