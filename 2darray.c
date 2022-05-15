#include <stdio.h>
int main()
{   int i,j; 
    int array[4][4]={{3,6,5,7},{2,8,6,10}};
    for ( i = 0; i <= 4; i++)
    {
        for ( j = 0; j <=4; j++)
        {
            printf("The value at %d,%d is %d\n",i,j,array[i][j]);
        }
        
    }
    

    
    
return 0;
}