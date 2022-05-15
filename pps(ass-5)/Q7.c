#include<stdio.h>

int main()
{
//     The distance between two cities is input through the keyboard .Write
// a program to convert and print this distance in meters, feet, inches
// and centimeters.
 float distance;
 printf("Enter The distance between two cities in km \n");
 scanf("%f", & distance);
 float meter = distance * 1000;
 float feet =  distance * 3280.84;
 float inches =   distance * 39370.1;
 float centimeters =  distance * 100000;
 printf("distance in meters: %f \n", meter);
 printf("distance in feet: %f \n"), feet;
 printf("distance in inches: %f \n ", inches);
 printf("distance in centimeters: %f \n",centimeters);
 
 return 0;
 }