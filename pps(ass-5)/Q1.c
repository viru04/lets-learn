#include <stdio.h>
#include<math.h>

int main(){
 
     int p, t;
     float r, simpleintrest, compoundintrest;
     printf("enter the principle amount :\n");
     scanf("%d", &p);
     printf("enter the annual intrest rate :\n");
     scanf("%f", &r);
     printf("enter the time period :\n");
     scanf("%d", &t);
     simpleintrest = p * r * t/100;
     compoundintrest = p * pow(1 + r / 100, t)-p;
     printf("the simple intrest is :%f \n", simpleintrest);
     printf(" the compound intrest is:%f", compoundintrest);  
     return 0;
     }

