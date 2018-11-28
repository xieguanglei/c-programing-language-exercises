#include <stdio.h>

int main()
{
    int fa, cel;
    int min, step, cur;

    cur = 100;
    min = 0;
    step = 5;

    printf("cel\tfa\n");
    while (cur >= min)
    {
        cel = cur;
        fa = cel * 9.0 / 5.0 + 32;
        printf("%d\t%d\n", cel, fa);
        cur = cur - step;
    }

    return 1;
}