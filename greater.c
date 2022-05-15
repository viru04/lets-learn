#include <stdio.h>
int main()
{
   int  n;
  printf("enter n:\n");
  scanf("%d",&n);
  int arr[n];
   for ( int i = 0; i<n; i++)
   {
       scanf("%d",&arr[i]);
   }
   int max=arr[0];
    for( int i=0; i<n; i++)
    {
        if(max<arr[i]){
           max=arr[i];
       
        }
    }
       printf("The greatest number is %d\n",max);
       int min=arr[0];
       for (int i =0; i<n; i++)
    {
        if (min>arr[i])
        {
           min=arr[i];
           
        }
        
    }
    printf("The smallest number is %d",min);
    
return 0;
}