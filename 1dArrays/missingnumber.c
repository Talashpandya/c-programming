#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[9] = { 1,2,3,4,5,6,7,9,10} ;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum1 += arr[i];
    }
    sum2 = (n * (n + 1)) / 2;
    int number = sum2 - sum1;
    printf("%d ", number);

    return 0;
}