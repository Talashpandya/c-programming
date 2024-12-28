#include <stdio.h>
int main()
{
    int n = 6;
    int arr[6] = {1, 2, 3, 3, 2, 1};
    int check = 0;
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        if (arr[i] == arr[j])
        {
            continue;
        }
        else
        {
            check = 1;
            break;
        }
    }
    if (check == 1)
    {
        printf("not palindrome");
    }
    else
        printf("palindrome");
    return 0;
}