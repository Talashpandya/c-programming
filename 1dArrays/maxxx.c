#include <stdio.h>
int main()
{
    int arr[3] = {-1, -3, -2};
    int max = arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max = %d", max);
    return 0;
}