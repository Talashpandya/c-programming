#include <stdio.h>
int maze2(int cr, int cc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc == ec)
        return 1;
    if (cr == er)
        rightways += maze2(cr, cc + 1, er, ec);
    if (cc == ec)
        downways += maze2(cr + 1, cc, er, ec);
    if (cc < ec && cr<er)
    {
        rightways += maze2(cr, cc + 1, er, ec);
        downways += maze2(cr + 1, cc, er, ec);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main()
{
    int er = 2, ec = 2;
    int value = maze2(1, 1, er, ec);
    printf("ways are %d", value);
    return 0;
}