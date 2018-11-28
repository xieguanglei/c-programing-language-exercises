#include <stdio.h>

void printbits(unsigned n)
{
    char s[32];
    int i = 32;
    while (i--)
    {
        if (n & 1)
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
        n >>= 1;
    }
    for (i = 0; i < 32; i++)
    {
        printf("%c", s[i]);
    }
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{

    unsigned maskX1 = ~(unsigned)0 << (p + 1);
    unsigned maskX2 = ~(~(unsigned)0 << (p + 1 - n));
    unsigned maskX = maskX1 | maskX2;
    unsigned maskY = ~maskX;

    printbits(x);
    printf("\n");

    printbits(y);
    printf("\n");

    printf("maskX\n");
    printbits(maskX);
    printf("\n");

    y = y << p + 1 - n;
    x = x & maskX;
    y = y & maskY;

    unsigned res = x | y;

    printf("res\n");
    printbits(res);
    printf("\n");

    return res;
}

void test(unsigned x, int p, int n, unsigned y)
{
    printf("setbits(%u, %u, %u, %u) = %u\n", x, p, n, y, setbits(x, p, n, y));
}

int main()
{
    test(235, 6, 4, 1823);
    test(21334352, 8, 7, 18233142);

    return 1;
}