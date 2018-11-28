#include <stdio.h>

int fa2cel(int fa){
    return (fa - 32.0) * 5.0 / 9.0;
}

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
        cel = fa2cel(fa);
        printf("%d\t%d\n", fa, cel);
        cur = cur + step;
    }

    return 1;
}