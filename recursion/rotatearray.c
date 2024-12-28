// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf ("%d",&n);
//     int k = 9;
//     if (k>n) k=k%n;

//     return 0;
// }
#include <stdio.h>
void reverse(int arr[], int ii, int ei)
{
    for (int i = ii, j = ei ; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n = 6;
    int k = 61;
    if (k > n)
    {
        k = k % n;
    }
    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}