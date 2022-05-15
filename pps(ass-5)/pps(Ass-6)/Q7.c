#include<stdio.h>
int youngest_of_three(int a,int b,int c){

if (a>b && a>c)
{
   printf("The oldest is Ram\n"); 
   if (b>c)
   {
      printf("The youngest is Ajay\n"); 
   }
   else{
       printf("The youngest is shyam \n"); 
   }
   

} 
else if (b>a && b>c)
{     printf("The oldest is Shyam \n"); 
 
  if (a>c)
  {
    printf("The youngest is Ajay\n"); 
  }
  else{
    printf("The youngest is Ram \n");   
  }
}
else if (c>a && c>b)
{     printf("The oldest is Ajay \n");  
   if(a>b)
  {
    printf("The youngest is Shyam\n"); 
  }
  else{
    printf("The youngest is Ram\n"); 
  }
  
}

}

int main(){
     int a,b,c;
    printf("Enter the age of Ram:");
    scanf("%d",&a);
    printf("Enter the age of Shyam:");
    scanf("%d",&b);
    printf("Enter the age of Ajay:");
    scanf("%d",&c);
    youngest_of_three(a,b,c);
    return 0;
}