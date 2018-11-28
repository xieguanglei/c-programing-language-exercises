#include <stdio.h>

int main()
{

    int c, len;
    int map[10];

    for (int i = 0; i < 10; i++)
    {
        map[i] = 0;
    }

    len = 0;

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
    }
    len = 0;

    printf("==== histogram ====\n");
    for (int i = 1; i < 10; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < map[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("===================\n");
}