#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxr = m-1;
    int maxc =n-1;
    int minr = 0;
    int minc = 0;
    int tn = m*n;
    int count = 0;
    while (count < tn)
    {
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", arr[minr][j]);

            count++;
        }
        minr++;

        if (count>=tn)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", arr[i][maxc]);

            count++;
        }
        maxc--;
       
        if (count>=tn)
            break;
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", arr[maxr][j]);

            count++;
        }
        maxr--;
       
        if (count>=tn)
            break;
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d ", arr[i][minc]);

            count++;
        }
        minc++;
    }
    return 0;
}
