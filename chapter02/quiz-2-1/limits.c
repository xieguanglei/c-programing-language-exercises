#include <stdio.h>
#include <limits.h>

int main()
{

    printf("CHAR_MAX\t%d\n", CHAR_MAX);
    printf("CHAR_MIN\t%d\n", CHAR_MIN);

    printf("SHRT_MAX\t%d\n", SHRT_MAX);
    printf("SHRT_MIN\t%d\n", SHRT_MIN);

    printf("INT_MAX\t\t%d\n", INT_MAX);
    printf("INT_MIN\t\t%d\n", INT_MIN);

    printf("LONG_MAX\t%ld\n", LONG_MAX);
    printf("LONG_MIN\t%ld\n", LONG_MIN);

    printf("UCHAR_MAX\t%u\n", UCHAR_MAX);
    printf("USHRT_MAX\t%u\n", USHRT_MAX);
    printf("UINT_MAX\t%u\n", UINT_MAX);
    printf("ULONG_MAX\t%lu\n", ULONG_MAX);

    return 1;
}