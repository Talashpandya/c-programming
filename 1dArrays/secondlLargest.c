#include <stdio.h>
int main()
{
    int x = 12;
    int arr[9] = {1, 2, 3, 4, 67, 67, 7, 8};
    int max = arr[0];
    int smax = arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {

            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}