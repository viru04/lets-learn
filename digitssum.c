#include <stdio.h>
int main()
{  
  int n,s=0,r;
  
  printf("enter the number:\n");
  scanf("%d",&n);
  while(n>0){

    r=n%10;
    s=s+r;
    n=n/10;
    
  }
  printf("The sum of digits is %d",s);  

return 0;
}