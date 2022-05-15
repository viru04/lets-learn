#include <stdio.h>
#include <math.h>
int main()
{
     int t;
    scanf("%d", &t);
    while (t--)
    {

        long long  int n, b, x, y;
        scanf("%lld %lld %lld %lld", &n, &b, &x, &y);
         long long int arr[n + 1],arr2[n+1]; 
        long long int c = 0,d=0;
        
        for ( long long int i = 0; i <= n; i++)
        {
             if(i==0)
             arr[i]=i;
             else{
                 arr[i]=arr[i-1]+x;
                 arr2[i]=arr2[i-1]-y;
             }

             if(arr[i]>=b)
             break;

             if (arr2[i]>=b)
             break;
             
        }
        for (long long int i = 0; i <= n; i++)
        {
           c=c+arr[i];
           d=d+arr2[i];
        }
        if(c>d)
        printf("%lld\n",c);
        else
        printf("%lld\n",d);
    }

    return 0;
}