#include <stdio.h>
void zigzag(int n)
{
    if (n==0)return;
    printf ("%d",n);
    zigzag (n-1);
    printf ("%d",n);
  zigzag (n-1);
    printf ("%d",n);
    return;
}

int main()
{
    int n = 2;
    zigzag(n);
    return 0;
}