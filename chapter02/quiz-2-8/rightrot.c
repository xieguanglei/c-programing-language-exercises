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

unsigned rightrot(unsigned x, int p)
{

    printbits(x);
    printf("\n");

    unsigned x1 = x >> p;

    printbits(x1);
    printf("\n");

    unsigned x2 = x << (32 - p);
    printbits(x2);
    printf("\n");

    unsigned res = x1 | x2;
    printbits(res);
    printf("\n");

    return res;
}

void test(unsigned x, int p)
{
    printf("rightrot(%u, %u) = %u\n", x, p, rightrot(x, p));
}

int main()
{
    test(235, 6);
    test(21334352, 8);

    return 1;
}