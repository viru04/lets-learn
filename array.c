#include<stdio.h>

int main(){
int arr[]={21,32,90,89,67,32,54,56,34};
int i;
//original order
for ( i = 0; i < 9; i++)
{
  printf("%d ", arr[i]);
}

printf("\n");
//reverse order
for ( i = 8; i >=0; i--)
{
  printf("%d ", arr[i]);
}





return 0;


}
  
   

