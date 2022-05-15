#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    // {
//     10) A cashier has currency notes of denominations 10,50,100.If amount
// to be withdrawn is input through the keyboard in hundreds ,find total
// number of currency notes of each denominations the cashier will have
// to give to the withdrawer.

    int amount;
    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d",&amount);
    printf("\n\nRequired notes of Rs. 100  :  %d", amount / 100); 
    printf("\n\nRequired notes of Rs. 50   :  %d", (amount % 100) / 50); 
    printf("\n\nRequired notes of Rs. 10   :  %d", (((amount % 100) % 50) / 10));
    printf("\n\nAmount still remaining Rs. :  %d", (((amount % 100) % 50) % 10));
    
    
return 0;
}