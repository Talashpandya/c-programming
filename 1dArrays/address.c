#include <stdio.h>
int main()
{
    int arr[10] = {12, 45, 67, 45, 34, 23, 76, 34, 45, 90};
    for (int i = 0; i < 10; i++)
    {
        printf("%p\n", &arr[i]);
    }
    return 0;
}