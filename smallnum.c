#include <stdio.h>
int main()
{

int a,b,c;
printf("enter the number a:\n");
printf("enter the number b:\n");
printf("enter the number c:\n");
scanf("%d%d%d", &a,&b,&c);

if (a>b & a>c)
{
  printf("The largest number is a=%d\n",a); 
}
else{

    if (b>a & b>c)
    {
      printf("The largest number is b=%d\n", b);  
    }
    else{
        printf("The largest number is c=%d\n", c); 

    }
    
}













    
    
return 0;
}