#include <stdio.h>
#include<math.h>
int main()
{
float a,b,c,D,X1,X2,d;
printf("Enter the coefficient of x^2:\n");
scanf("%f",&a);    
printf("Enter the coefficient of x:\n");
scanf("%f",&b);    
printf("Enter the constant:\n");
scanf("%f",&c);
D=(b*b)-(4*a*c);
d=2*a;
X1=(-b+sqrt(D))/d;
X2=(-b-sqrt(D))/d;
if (D>0)
{
    printf("The quadratic equation has real roots:%.1f %.1f",X1,X2);
}
else if (D==0)
{  
    X1=(b+sqrt(D))/d;
    X2=(-b-sqrt(D))/d;
   printf("The quadratic equation has equal roots:%.1f %.1f",X1,X2);
}


else{

    printf("The quadratic has imaginary roots");
}
    
return 0;
}