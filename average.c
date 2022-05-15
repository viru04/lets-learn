#include<stdio.h>
float avg(int a,int b,int c){
int sum;
sum=a+b+c;


   return (float)sum/3;
}

int main(){
int a,b,c;

printf("enter the numer a:\nenter the number b:\nenter the number c:\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
avg(a,b,c);


return 0;

}

