#include <stdio.h>

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
    {
        if (x & 01)
        {
            b++;
        }
    }
    return b;
}

int fasterBitcount(unsigned x)
{
    int b = 0;
    while (x != 0)
    {
        x = x & (x - 1);
        b++;
    }
    return b;
}

int main()
{
    int i = 131235;
    printf("bitcount(%d) = %d\n", i, bitcount((unsigned)i));
    printf("fasterBitcount(%d) = %d\n", i, fasterBitcount((unsigned)i));

    return 1;
}