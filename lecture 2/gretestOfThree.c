#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b!=c || c == b && b!=a || a == c && c!=a)
    {
        printf("isoscles traingle");
    }
    else if (a==b==c)
    {
        printf("equilateral");
    }
    else
    {
        printf("simple traingle");
    }
    return 0;
}