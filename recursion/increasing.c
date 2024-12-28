#include <stdio.h>
void number(int n)
{
    if (n == 0)
        return;
    printf("%d\n",n);
    number(n - 1);
    return;
}

int main()
{
    int n = 3;
    number(n);
    return 0;
}