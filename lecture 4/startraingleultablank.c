
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf ("%d",&n);
//     for (int i = 1; i <= (n * 2) - 1; i++)
//     {
//         printf("*");
//     }
//     printf ("\n");
//     for (int l = 1; l <= n - 1; l++)
//     {
//         for (int j = n - 1; j > 0; j--)
//         {
//             printf("*");
//         }
//         for (int k = 1; k <= (2 * n) - 1; k = k + 2)

//         {
//             printf(" ");
//         }
//         for (int j = n - 1; j > 0; j--)
//         {
//             printf("*");
//         }
//           printf ("\n");
//     }
    

//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
