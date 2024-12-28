#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int gcf(int x, int y)
{
    int hcf = 1;
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int n = 15;
    int r = 60;
    int hcf = gcf(n, r);
    printf("hcf is %d", hcf);
    return 0;
}