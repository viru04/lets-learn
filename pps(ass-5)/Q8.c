#include <stdio.h>
int main()
{
    // //     Temperature of a city in Fahrenheit degrees is input through the   (1°F − 32) × 5/9
 // keyboard Write a program to convert this temperature into
 // centigrade degrees.
  float f;
  printf("Enter Temperature of a city in Fahrenheit degrees \n");
  scanf("%f", &f);
  float temp =  (float) (f - 32) * 5/9;
 printf("temperature in centigrade degrees is : %f", temp);
    
return 0;
}