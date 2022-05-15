#include <stdio.h>
#include<math.h>
    int main()
{
    int x ,y;
    printf("Enter the x and  y cordinate of center \n");
    scanf("%d %d", &x,&y);
    int r;
    printf("Enter the radius \n");
    scanf("%d",&r);
    int x1 ,y1;
    printf("Enter the x and y cordinate of point \n");
    scanf("%d %d" ,&x1,&y1);
    float d = sqrt(pow(x1 -x,2) + pow(y1 -y,2));
    if(d > r ){
        printf("The point is outside the circle");
    }
    else if(r>d){
         printf("The point is inside  the circle");
    }else{
         printf("The point is on the circle");
    }
    return 0;
}
