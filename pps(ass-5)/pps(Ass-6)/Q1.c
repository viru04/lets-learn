#include <stdio.h>

int max_of_three(int a,int b,int c){

if (a>b && a>c)
{
   printf("The greatest is :%d\n",a); 
   if (b>c)
   {
      printf("The smallest is :%d\n",c); 
   }
   else{
       printf("The smallest is :%d\n",b); 
   }
   

} 
else if (b>a && b>c)
{
  printf("The greatest is :%d\n",b);
  if (a>c)
  {
     printf("The smallest is :%d\n",c); 
  }
  else{
      printf("The smallest is :%d\n",a); 
  }
}
else if (c>a && c>b)
{
  printf("The greatest is :%d\n",c);
  if (a>b)
  {
      printf("The smallest is :%d\n",b); 
  }
  else{
      printf("The smallest is :%d\n",a); 
  }
  
}




}
    
int main()
{
    int a,b,c;
    printf("enter the numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    max_of_three(a,b,c);
    
return 0;
}