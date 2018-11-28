#include <stdio.h>

int main()
{

    int c, len, max;
    int map[10];

    for (int i = 0; i < 10; i++)
    {
        map[i] = 0;
    }

    len = 0;
    max = 0;

    printf("input something:\n");

    while ((c = getchar()) != 10)
    {
        if (c == 9 || c == 32)
        {
            if (len != 0)
            {
                if (len >= 10)
                {
                    len = 9;
                }
                map[len] = map[len] + 1;
                if (map[len] > max)
                {
                    max = map[len];
                }
            }
            len = 0;
        }
        else
        {
            len++;
        }
    }

    if (len != 0)
    {
        if (len >= 10)
        {
            len = 9;
        }
        map[len] = map[len] + 1;
        if (map[len] > max)
        {
            max = map[len];
        }
    }
    len = 0;

    printf("==== histogram ====\n");
    for (int i = max; i > 0; i--)
    {
        for (int j = 1; j < 10; j++)
        {
            if (map[j] >= i)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int j = 1; j < 10; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    printf("===================\n");
}