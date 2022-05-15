#include <stdio.h>
int main()
{
    int n,r,arr[10],i=0;
    printf("Enter the number you want octal equivalent of:\n");
    scanf("%d",&n);
    while (n)
    {
       r=n%8;
       n=n/8;
       arr[i]=r;
       i++;
    }
    printf("Octal equivalent of the number is:");
     for (int j=i-1; j>=0; j--)
     {  
        printf("%d",arr[j]);
     }
     
    
return 0;
}