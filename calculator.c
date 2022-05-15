#include<stdio.h>
int add(int a,int b){

    printf("a+b=%d",a+b);
}

int subtract(int a, int b){

    printf("a-b=%d",a-b);
}
int multiply(int a, int b){

   printf("a*b=%d",a*b);
}
int divide( int a,int b){

   printf("a/b=%d",a/b);
}


int main()
{    int a,b;
    printf("Enter the value of a:\n Enter the value of b:\n");
    scanf("%d%d",&a,&b);
    multiply(a,b);

  return 0;
}