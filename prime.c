
#include <stdio.h>
int main(){
 int T;
    scanf("%d",&T);
    
    while(T-->0){
       int n;
        scanf("%d",&n);
        int j=0,arr[n],sum=0;
        
        
        for(int i=1;i<n;i++){
            
            if(n%i==0){
               i=arr[j];
               j++;
             
            }
        }
        for (int j = 0; j<n; j++)
        {
          sum=sum+arr[j];
        }
        

  
              if(sum==n){
        printf("Perfect");
    }
    else{
        printf("Not Perfect");
    }
    }
      
   
   
return 0;
}







 /*#include <stdio.h>
int main()
{
   int n,p,i,s=1;
   printf("enter the number:\n ",n);
   printf("enter the power of number you want:\n ",p);
   scanf("%d%d",&n,&p);
   
   for (int i = 0; i< p; i++)
   {
     s=s*n;
   }
   
   printf(" the value of  %d to the power %d is:%d\n ",n,p,s);
  
   
return 0;
}*/
/*#include <stdio.h>
int main()
{
   
 int i=1;
 while (i<=10)
 {
    printf("%d\n",i);
    i++;
 }
   
return 0;
}*/