#include <stdio.h>
#include <string.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    scanf("%s", s);
    
    int c = strlen(s);
    int d;
    for (int i = 0; i < c; i++)
    {
        char a[10]={'0','1','2','3','4','5','6','7','8','9'};
        int e = 0;
        for (int j = 0; j < c; j++)
        {
             
            if (s[j]==a[i])
                e++;
               
        }

        printf("%d ", e);
    }

    return 0;
}
