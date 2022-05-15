// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i<=n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("*");

//         }

//        printf("\n");

//     }

// return 0;
// }
#include <stdio.h>
int main()
{
    int n, c = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        printf("%dx%d=%d,", i, c, i * c);
    }

    return 0;
}
