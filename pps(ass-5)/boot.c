#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0){
        int n;
        scanf("%d",&n);
        int arr[3][n];
        for ( int i=0; i <3; i++)
    {
        for (int j=0; j <n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
       for ( int i = 0; i <3; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("%d ",arr[i][j]);
        }
         printf("\n");
    }
       
    }
     
return 0;
}