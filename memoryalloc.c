#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*ptr;
    printf("Enter n:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i <n; i++)
    {
        printf("%d ",ptr[i]);
    }
    
    
return 0;
}