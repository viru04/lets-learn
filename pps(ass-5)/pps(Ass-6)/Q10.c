#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the x coordinate\n");
    scanf("%d",&x);
    printf("Enter the y coordinate\n");
    scanf("%d",&y);
    if (x==0 && y!=0)
    {   printf("point lie on the y axis");
    }
    else if (y==0 && x!=0)
    {   printf("point lie on the x axis");
    }
    else if (x==0 && y==0)
    {printf("point lie on the origin");
    }
    else{
        printf("point does not lie on any of the axes");
    }
    
return 0;
}