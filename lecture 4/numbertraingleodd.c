// #include <stdio.h>
// int main()
// {
//     int n,a=1;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i;j++)
//         {
//             printf("%d",a);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i;j++)
        {
            printf("%d ",a);
           a =a+2;
        }
         
        printf("\n");
        //  a =a+2;
    }
    return 0;
}
