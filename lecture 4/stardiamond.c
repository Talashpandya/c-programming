// // #include <stdio.h>

// int main() {
//     int n, nsp, nst, ml;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     nsp = n / 2;
//     nst = 1;
//     ml = (n / 2) + 1;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= nsp; j++) {
//             printf(" ");
//         }

//         for (int k = 1; k <= nst; k++) {
//             printf("*");
//         }

//         if (i < ml) {
//             nsp--;
//             nst += 2;
//         } else {
//             nsp++;
//             nst -= 2;
//         }

//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n, nsp, nst, ml;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     nsp = n / 2;
//     nst = 1;
//     ml = (n / 2) + 1;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= nsp; j++) {
//             printf(" ");
//         }

//         for (int k = 1; k <= nst; k++) {
//             printf("*");
//         }

//         if (i < ml) {
//             nsp--;
//             nst += 2;
//         } else {
//             nsp++;
//             nst -= 2;
//         }

//         printf("\n");
//     }

//      return 0;
// }
#include <stdio.h>
int main()
{
    int n, nst, ml, nsp;
    scanf("%d", &n);
    ml = (n / 2) + 1;
    nst = 1;
    nsp = (n / 2);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k<=nst;k++){
            printf ("*");}
            if (i<ml)
            {
                nst+=2;
                nsp--;
            }
            else {
                nst-=2;
                nsp++;
            }
        
        printf("\n");
    }
    return 0;
}