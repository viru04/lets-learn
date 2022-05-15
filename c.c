#include <stdio.h>
/*int main()
{
    int n;
    printf("Enter the number  of rows:\n",n);
    scanf("%d",&n);
    for (int i = n; i>=0; i--)
    {    
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
  
return 0;
}*/
/*#include <stdio.h>
int main()
{
   int arr[]={2,3,4,5,6,7,8,9,78,79};
   int n,c=0,i;
   printf("Enter a number you want to search:\n");
   scanf("%d",&n);
   for ( i = 0; i < 10; i++)
   {
       if (n==arr[i])
       {
           c++;
          break;
          
       }
       
   }*/

#include <stdio.h>
int main() {

 
    int T;
   
    scanf("%d",&T);
    while(T-->0){
          int n;
          int c=0;
          
        scanf("%d",&n);
       for (int i=1; i<=n; i++)
       {
        if(i%2==0 || i%3==0){
            c++;
             }
        
    }
    printf("%d",c);
    printf("\n"); 
    }
    
     
   
        
    
 
    return 0;
}
/*#include<stdio.h>
int main() {

    
     long long int n;
    char ch;
    scanf("%lld %c",&n , &ch);
    char arr[n+1];
    for(int i=0; i<n ;i++){
        
        scanf("%c", &arr[i]);
    }
    int c=0;
    for(int i=0; i<n ;i++){
        
        if(ch==arr[i]){
            c++;
            
        }
    }
    
    printf("%d",c);
    return 0;
}*/




