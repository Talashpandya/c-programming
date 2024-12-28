#include <stdio.h>
int main()
{
    // WAP to print cross odd number
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // no of rows
        for (int j = 1; j <= n; j++)
        { // no of columns
            if (i == j || i + j == n + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
        return 0;
}
