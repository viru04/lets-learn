#include <stdio.h>
int main()
{
//Rameshs basic salary is input through the keyboard his dearness
 // allowance is 40% of basic salary and house rent allowance is 20% of
 //basic salary. Write a program to calculate his gross salary.   
 int salary;
 printf("Enter Ramesh Basic salary \n");
 scanf("%d", &salary); 
 float dearness = 0.4* salary;
 float  houserent = 0.2 * salary;
 float grosssalary= salary + dearness + houserent;
  printf("dearness allowance=%f\nhouserent allowance=%f \n",dearness,houserent);
  printf("grosssalary=%f",grosssalary); 
    
return 0;
}