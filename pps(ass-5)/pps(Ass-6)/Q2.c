#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number: \n");
    scanf("%d",&n);
    for (int i =1; i<=n; i++)
    {
       if (n%i==0)
       {
           c++;
       }
       
    }
    if (c==2)
    {
       printf("It is a prime number "); 
    }
    else{
        printf("It is not a prime number ");
    }
    
return 0;
}