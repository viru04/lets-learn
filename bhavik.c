#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n, d = 0, c = 0;
        scanf("%d", &n);
        int k = n;
        while (n > 0)
        {
            c = n % 10;
            if (c > 0)
            {
                if (k % c == 0)
                {
                    d++;
                }
            }
            n = n / 10;
        }
        printf("%d\n", d);
        t--;
    }
    return 0;
}