#include <stdio.h>
int main()
{
    int n, nst, nsp,ml;
    scanf("%d", &n);
    nst = 1;
    nsp = (n / 2);
    ml = (n / 2) + 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j=1; j <= nsp; j++)

        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }
    return 0;
}