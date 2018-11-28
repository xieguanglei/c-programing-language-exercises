#include <stdio.h>

int main()
{
    int fa, cel;
    int max, step, cur;

    cur = 0;
    max = 100;
    step = 5;

    printf("cel\tfa\n");
    while (cur <= max)
    {
        cel = cur;
        fa = cel * 9.0 / 5.0 + 32;
        printf("%d\t%d\n", cel, fa);
        cur = cur + step;
    }

    return 1;
}