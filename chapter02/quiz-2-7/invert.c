#include <stdio.h>

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

unsigned invert(unsigned x, int p, int n)
{

    unsigned mask1 = ~(unsigned)0 << (p + 1);
    unsigned mask2 = ~(~(unsigned)0 << (p + 1 - n));
    unsigned mask = mask1 | mask2;
    // mask = x | ~mask;

    printbits(x);
    printf("\n");

    printbits(mask);
    printf("\n");

    unsigned x1 = mask & x;
    unsigned x2 = ~mask & x;
    x2 = ~x2 & ~mask;

    printbits(x1);
    printf("\n");

    unsigned res = x1 | x2;

    printbits(res);
    printf("\n");

    return res;
}

void test(unsigned x, int p, int n)
{
    printf("invert(%u, %u, %u) = %u\n", x, p, n, invert(x, p, n));
}

int main()
{
    test(235, 6, 4);
    test(21334352, 8, 5);

    return 1;
}