
#include <stdio.h>

void changevalue( int* a,int* b){

*a=7,*b=1;

}
int main()
{
  int a=4, b=3;
  printf("the value of a now is %d\n",a);
  printf("the value of a now is %d\n",b);
  printf("the value of addition  is %d\n",a+b);
  printf("the value of subtraction  is %d\n",a-b);
  changevalue(&a,&b);
   printf("the value of a now is %d\n",a); 
   printf("the value of b now is %d\n",b); 
    
return 0;
}