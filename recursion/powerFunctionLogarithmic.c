#include <stdio.h>
int powerlog(int b, int p)
{
    if (p == 0)
        return 1;
    int v = powerlog(b, p / 2);
    if (p % 2 == 0)
        return v * v;
    else
        return v * v * b;
}

int main()
{
    int b = 2, p = 4;
    int value = powerlog(b, p);
    printf("value is %d", value);
    return 0;
}