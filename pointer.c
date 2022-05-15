#include <stdio.h>
int main()
{
 printf("Pointer Basics\n");
 int a=76;
 int* ptra=&a;
 int* ptr2=NULL;

  printf("The address of pointer is %p \n", &ptra);
  printf("The address of a is %p\n", &a);
  printf("The address of a is %x\n", ptra);
  printf("The address of some garbage is %p\n", ptr2);
  printf("the value of a is %d\n", *ptra);
  printf("the value of a is %d\n", &a);  
    
return 0;
}
// #include<stdio.h>
// int swap(int *a,int *b){
//   int t;
//    t=*b;
//    *b=*a;
//    *a=t;

// }
// int main()
// {
//   int a[]={5,16,7,89,45,32,23,10};
//   int *p=&a[1],*q=&a[5];
//   printf("%d",*p<*q);
  
// return 0;
// }
