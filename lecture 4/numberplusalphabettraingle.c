
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//      for (int i=1 ; i<=n;i++){
//         for (int j=1;j<=n-i;j++){
//             printf (" ");
//         }
//         for (int k=1;k<=n;k++){
//             printf ("*");
//         }
//         printf ("\n");
//      }
//         return 0;
//     }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {   
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", j + 64);
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
        
    }
       return 0;
}
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             for (int j = 1; j <= i; j++) {
//                 printf("%c", 'A' + j - 1);
//             }
//         } else {
//             for (int j = 1; j <= i; j++) {
//                 printf("%d", j);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }