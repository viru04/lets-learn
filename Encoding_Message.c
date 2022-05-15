#include <stdio.h>


int main(void)
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        char a;
        for (int i = 0; i < n-1; i += 2)
        {
            a=s[i];
            s[i]=s[i+1];
            s[i+1]=a;
            
        }
        
        for (int i = 0; i < n; i++)
        {
            s[i] = 'z' + 'a' - s[i];
        }
        printf("%s", s);
    }

    return 0;
}