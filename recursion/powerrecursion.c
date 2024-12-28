#include <stdio.h>
int power(int b,int p)
{
    if (p==0){
        return 1;}
        int pow = b*power(b,p-1);
    return pow;
}

int main()
{
    int b = 2,p=5;
    int pow = power(b,p);
    printf("power is %d", pow);
    return 0;
}