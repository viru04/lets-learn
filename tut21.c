#include<stdio.h>


int factorial(int number){
   int f;
   if(f==0||f==1)
   return 1;
   else
   f=number*factorial(number-1);
   return f;



}
int main(){
    int num;
 printf("Enter the number you want factorial of:\n");
 scanf("%d", &num);
 printf("The factorial of %d is %d\n",num,factorial(num));

 return 0;
     
}


