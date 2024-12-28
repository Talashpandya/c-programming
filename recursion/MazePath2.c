#include <stdio.h>
int maze2(int er, int ec)
{
    int rightways = 0;
    int downways = 0;
    if (er == 1 && ec == 1)
        return 1;
    if (er == 1)
        rightways += maze2(er, ec - 1);
    if (ec == 1)
        downways += maze2(er - 1, ec);
    if (ec > 1 && er > 1)
    {
        rightways += maze2(er, ec - 1);
        downways += maze2(er - 1, ec);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main()
{
    int er = 2, ec = 2;
    int value = maze2(er, ec);
    printf("ways are %d", value);
    return 0;
}