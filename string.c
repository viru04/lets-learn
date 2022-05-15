#include <stdio.h>
#include<string.h>
/*int main()
{

  int num;
  printf("Enter the number:\n");
 scanf("%d", &num);
  int rev[]="VIRAJ";
  printf("The reverse of num is :%s",strrev(rev));  
    
return 0;
}*/

int main()
{
  int t;
  scanf("%d",&t);
  while (t-->0)
  {
    // int n;
    long long int s[10];
    scanf("%s",s);
    int a=0;
    for (int i = 0; i <10; i++)
    {
      if (s[i]==0 || s[i]==5)
      {
        a++;
        break;
      }
      
    }
    if(a>0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    
    }
   
  }
  
  
return 0;
}