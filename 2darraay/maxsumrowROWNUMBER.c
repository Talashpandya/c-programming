#include <stdio.h>
int main()
{
    int arr[2][2] = {1, 9, 3, 12};
    int brr[2][2] = {1, 2, 3, 8};
    int sum = 0;
    int summax = 0;
    int sumMax = 0;
    int max = arr[0][0];
    int min = arr[0][0];
    int maxsumrow = 0;
    int idxmaxi = 0;
    int idxmaxj = 0;
    for (int i = 0; i < 2; i++)
    {
        int summax = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
            summax += arr[i][j];
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                idxmaxi = i;
                idxmaxj = j;
            }
            if (arr[i][j] < min)
                min = arr[i][j];
            arr[i][j] += brr[i][j];
        }
        if (summax > sumMax)
        {
            sumMax = summax;
            maxsumrow = i;
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("% d", arr[i][j]);
        }
        printf("\n");
    }
    printf("%d %d %d index of maximum element (%d,%d)and \n max sum row is %d and sum is %d", sum, max, min, idxmaxi, idxmaxj, maxsumrow, sumMax);
    return 0;
}
