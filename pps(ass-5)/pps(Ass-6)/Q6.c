#include <stdio.h>
int main()
{ int cp,sp;

printf("Enter the cost price:\n");
scanf("%d",&cp);
printf("Enter the selling price:\n");
scanf("%d",&sp);
 if (sp-cp>0)
 {
   printf("the profit is:%d",sp-cp);
 }
else{
    printf("There is loss of:%d",cp-sp);
}
    
return 0;
}