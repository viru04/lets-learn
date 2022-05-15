/*#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0){
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for (int i = 0; i <n; i++)
        {
            if(arr[i]<=k){
                printf("1");

             k=k-arr[i];

            }
            else{
                printf("0");
            }



        }


    }

return 0;
}*/

// int swap(char a,char b){
// 	a=b;
// 	b=a;

// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main()
// {

//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, b;
//         scanf("%d %d", &n, &b);
//         int w, h, p;
//         int a[n][3];
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
//         }
//         int c = 0;
//         int arr[n];
//         for (int k = 0; k < n; k++)
//         {
//             if (a[k][2] <= b)
//             {
//                 arr[k] = a[k][0] * a[k][1];
//                 c++;
//             }
//             else
//             {
//                 arr[k] = 0;
//             }
//         }
//         if (c > 0)
//         {
//             int max = arr[0];
//             for (int i = 0; i < n; i++)
//             {
//                 if (max < arr[i])
//                 {
//                     max = arr[i];
//                 }
//             }
//             printf("%d\n", max);
//         }
//         else
//         {
//             printf("no tablet\n");
//         }
//     }
    

//     return 0;
//}
#include <stdio.h>
int main()
{
   int t;
  scanf("%d",&t);
  while(t--){
      char s[1000000];
      scanf("%s",s);
       int n=strlen(s);
       int d=0;
       int arr[1000000];
       int j=0;
      for ( int i = 0; i <n; i++)

      { 
          
          if(s[i]!=s[0] && s[i]!=s[n-1]){
              d++;
          }
          else{
              arr[j]=d;
              j++;
              d=0;
             
              
          }
      }
       int max=arr[0];
      for ( int i = 0; i <j; i++)
      {
          if (max<arr[i])
          {
              max=arr[i];
          }
          
      }
      if(max==0){
          printf("-1\n");

      }
      else
     printf("%d\n",max);
  }  
    
return 0;
}
 
  