//6)Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.
#include<stdio.h>
#define PI 3.14
int main()
{
	int radius,length,breadth,side,base,height,num;
	float area;
	
	scanf("%d",&num);
	switch (num)
	{
		case 1: 
		        printf("\n\nEnter the radius of circle : ");
		        scanf("%d",&radius);
				area = PI*radius*radius;
				printf("\nArea of the circle : %.2f\n\n",area); 
				break;
        case 2: 
		        printf("\n\nEnter the length of the rectangle : ");
		        scanf("%d",&length);
		        printf("Enter the breadth of the rectangle : ");
		        scanf("%d",&breadth);
				area = length*breadth;
				printf("\nArea of the rectangle : %.2f\n\n",area); 
				break;
		case 3: 
		        printf("\n\nEnter the side of square : ");
		        scanf("%d",&side);
				area = side*side;
				printf("\nArea of the sqaure : %.2f\n\n",area); 
				break;
        case 4: 
		        printf("\n\nEnter the height of the triangle : ");
		        scanf("%d",&height);
		        printf("Enter the base of the triangle : ");
		        scanf("%d",&base);
				area = 0.5*height*base;
				printf("\nArea of the triangle : %.2f\n\n",area); 
				break;
	}
	return 0;
}