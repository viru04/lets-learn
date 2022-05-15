#include <stdio.h>
int circle_area(int r){
    float area;
    area=3.14*(r*r);
    printf("Area of circle is %.2f\n",area);
}
int perimeter_Of_Circle(int r){
      float perimeter;
    perimeter=3.14*2*r;
    printf("perimeter of circle is %.2f\n",perimeter);
}
int area_Of_rectangle(int l,int b){
      float area;
    area=l*b;
    printf("area of rectangle is %.2f\n",area);
}
int triangle_area(int bs,int h){
    float area;
    area=0.5*bs*h;
    printf("Area of triangle is %.2f\n",area);
}
int perimeter_of_triangle(int a,int b,int c){
    int perimeter=a+b+c;
    printf("the perimeter of triangle is :%d\n",perimeter);
}

int main()
{   
    int r,L,B,a,b,c,bs,h;

    printf("Enter the radius of circle:\n",r);
    scanf("%d",&r);
    circle_area(r);
    perimeter_Of_Circle(r);
    printf("Enter the length of rectangle:\n",L);
    scanf("%d",&L);
    printf("Enter the breadth of rectangle:\n",B);
    scanf("%d",&B);
    area_Of_rectangle(L,B);
      printf("Enter the base and height of triangle:");
    scanf("%d%d",&bs,&h);
    triangle_area(bs,h);
    printf("Enter the sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    perimeter_of_triangle(a,b,c);
    
return 0;
}