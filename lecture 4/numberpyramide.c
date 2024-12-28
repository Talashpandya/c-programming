#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int n=(m/2)+1;
    for (int i = 1; i <= n; i++)
    {
        // int a = i - 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        int a = i - 1;
        for (int l = 1; l <= i - 1; l++)
        {

            printf("*");
            a--;
        
        }

        printf("\n");
    }
    return 0;
}