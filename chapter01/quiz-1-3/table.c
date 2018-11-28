#include <stdio.h>

int main()
{
    int fa, cel;
    int max, step, cur;

    cur = 0;
    max = 100;
    step = 5;

    printf("fa\tcel\n");
    while (cur <= max)
    {
        fa = cur;
        cel = (fa - 32.0) * 5.0 / 9.0;
        printf("%d\t%d\n", fa, cel);
        cur = cur + step;
    }

    return 1;
}