#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
   int sum=0;
  while (N!=0)
  {
     int r;
     r=N%10;
     r=r*r*r;
     sum=sum+r;
  }
  if (sum==N)
  {
     printf("Y");
  }
  else{
      printf("N");
  }
    
return 0;
}