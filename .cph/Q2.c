//2)Write C program for two point - three point numerical differentiation of given equation.
#include<stdio.h>
#include<math.h>
float fun(float n);
int main()
{
    char choice='y';
    float function1,function2,x,h;
    printf("X : ");
    scanf("%f",&x);
    do {
        printf("Enter value of h : ");
        scanf("%f",&h);
        printf("\nThe derivative is : ");
        function1=(fun(x+h)-fun(x))/h;
        function2=(fun(x+h)-fun(x-h))/(2*h);
        printf("\nTwo point derivative = %f",function1);
        printf("\nThree point derivative = %f\n\n",function2);
        printf(" continue (y/n) ");
        scanf("%c",&choice);
    }while(choice=='y');
    return 0;
}
float fun(float x)
{
    return exp(x)*sin(x);
}