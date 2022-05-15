#include <stdio.h>
//#include<math.h>
 int main()
 {
 float units, charges,r;
 char name[40];
printf("Enter the name of user :\n");
scanf("%s",name);
 printf("Enter the number of units consumed by %s:",name);
 scanf("%f",&units);
if (units<=200)
{
   charges=(units)*0.8;
   printf("The charges are :%f\n", charges+100);
   
}

else if(units<=300){
    
      charges=(units-200)*0.9;
      printf("The charges are :%f\n", charges+260);
      
     }
 else if(units>300)
 {   
     charges=350+(units-300); 
     r=charges*0.15+charges;

   if (charges>400)
      {
         
          printf("The charges are :%f\n", r);
      }
      else{
          printf("The charges are:%f\n",charges);
      }
 }
     

 
 return 0;
 }