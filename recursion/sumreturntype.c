#include <stdio.h>
int sum(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    int n = 4;
    int summ = sum(n);
    printf("factorial is %d", summ);
    return 0;
}