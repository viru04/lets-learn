#include <stdio.h>
int main()
{
 int x1,x2,x3,y1,y2,y3;
 printf("Enter the x coordinate of the points:");
 scanf("%d%d%d",&x1,&x2,&x3);
 printf("Enter the y coordinate of the points:");
 scanf("%d%d%d",&y1,&y2,&y3);
 float m1=(x2-x1)/(y2-y1);
 float m2=(x3-x2)/(y3-y2);
 printf("m1=%.2f\nm2=%.2f\n",m1,m2);
 if (m1==m2)
 {
     printf("three points lie on the straight line");
 }
 else{
      printf("three points does not lie on the straight line");
 }

    
return 0;
}