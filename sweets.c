#include <stdio.h>
#include<math.h>
int main()
{
    int a1, a2, a3, sweets, price_of_a1, price_of_a2,
        price_of_a3,cost;
    scanf("%d", &price_of_a1);
    scanf("%d", &price_of_a2);
    scanf("%d", &price_of_a3);
    a1 = price_of_a1;
    a2 = price_of_a2;
    a3 = price_of_a3;

    printf("which sweet do you want first");
    scanf("%d", &sweets);
    if (sweets == 1)
    {
        price_of_a1 = 0;
        // printf("enter the price of 1");
        // scanf("%d", price_of_a1);
        printf("which sweet do you want second");
        scanf("%d", &sweets);
        if (sweets == 2)
        {
            // scanf("%d", price_of_a2);
            // a2=price_of_a2;
            price_of_a2 = a2 - a1;
            printf("which sweet do you want third");
            scanf("%d", &sweets);
            if (sweets == 3)
            {
                price_of_a3 = a3 - a2;
                cost=price_of_a1+price_of_a2+price_of_a3;
                printf("cost=%d ",cost);
            }
        }
        else if (sweets == 3)
        {
            //  scanf("%d", price_of_a3);
            //  a3=price_of_a3;
            price_of_a3 = a3 - a1;
            printf("which sweet do you want third");
            scanf("%d", &sweets);
            if (sweets == 2)
            {
                price_of_a2 = a2 - a3;
                cost=price_of_a1+price_of_a2+price_of_a3;
                printf("cost= %d",cost);
            }
        }
    }

    else if (sweets == 2)
    {
        price_of_a2 = 0;
        // printf("enter the price of 2");
        // scanf("%d", price_of_a2);
        printf("which sweet do you want second");
        scanf("%d", &sweets);
        if (sweets == 1)
        {
            price_of_a1 = a1 - a2;
            printf("which sweet do you want third");
            scanf("%d", &sweets);
            if (sweets == 3)
            {
                price_of_a3 = a3 - a1;
                cost=price_of_a1+price_of_a2+price_of_a3;
                printf("cost =%d",cost);
            }
        }
        else if (sweets == 3)
        {
            price_of_a3 = a3 - a1;
            printf("which sweet do you want third");
            scanf("%d", &sweets);
            if (sweets == 1)
            {
                price_of_a1 = a1 - a2;
                cost=price_of_a1+price_of_a2+price_of_a3;
                printf("cost = %d",cost);
            }
        }
    }
    else if (sweets == 3)
    {
        price_of_a3 = 0;
        // printf("enter the price of 3");
        // scanf("%d", price_of_a3);
        printf("which sweet do you want second");
        scanf("%d", &sweets);
        if (sweets == 1)
        {
            price_of_a1 = a1 - a3;
            printf("which sweet do you want third");
            scanf("%d", &sweets);
            if (sweets == 2)
            {
                price_of_a2 = a2 - a1;
                cost=price_of_a1+price_of_a2+price_of_a3;
                printf("cost %d= ",cost);
            }
        }
        else if (sweets == 2)
        {
            price_of_a2 = a2 - a3;
            printf("which sweet do you want third");
            scanf("%d", &sweets);
            if (sweets = 1)
            {
                price_of_a1 = a1 - a2;
                cost=price_of_a1+price_of_a2+price_of_a3;
                printf("cost %d= ",cost);
            }
        }
    }

    
        return 0;
}
