//1)Write a program in C to show the simple structure of a function
#include<stdio.h>
int sum(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int main()
{
    int a=10,b=20;
    int c= sum(a,b);
    printf("Sum : %d",c);
    return 0;
}