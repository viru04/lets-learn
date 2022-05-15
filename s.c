#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t-- > 0)
    {
        int n, x, m = 0, a = 0, b = 0;
        scanf("%d %d", &n, &x);
        

        for (int i = 0; i < n; i++)
        {
           m=m+3;
           a++;
            if (m < x)
            {
                // m = m + 3;
                // a++;
                continue;
                
            }
            else if (m > x)
            {
                // goto here;
                m = m - 1;
                b++;
            }
            else if (m == x)
            {
                int c;
                c = n - (b + a);
                printf("YES\n");
                printf("%d %d %d\n", a, b, c);
                break;
            }
        }
        // for(int j=0;j<m;j++)
        // {
        //     here:
        //     b++;
        //     m=m-1;

        // }
    }

return 0;
}
