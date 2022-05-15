#include <stdio.h>
int main()
{ int n,s=1;
printf("Enter the number you want factorial of:");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    s=s*i;
    
}

   printf("the factorial of the number is %d",s); 
    
return 0;
}