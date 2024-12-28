#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            printf("composite number");
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("prime number ");
    }
    return 0;
}