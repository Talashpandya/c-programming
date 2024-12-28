#include <stdio.h>
int min(int j, int k)
{
    if (j < k)
    {

        return j;
    }
    else
        return k;
}
int gcd(int a, int b)
{
    for (int j = min (a,b); j >=1; j--)
    {
        if (a % j == 0 && b % j == 0)
        {
            return j;
        }
    }
    // return 1;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
   int result = gcd (n,m);
        printf("%d",result);
    return 0;
}