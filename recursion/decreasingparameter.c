#include <stdio.h>
void number(int x,int n)
{
    
    printf("%d\n",x);
    if (n==x)return;
    number(x+1,n);
    return;
}

int main()
{
    int n = 3;
    number(1,n);
    return 0;
}