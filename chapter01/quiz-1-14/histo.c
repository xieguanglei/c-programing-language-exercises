#include <stdio.h>

int main()
{

    int c, n;

    int a, z, au, zu;

    a = 'a';
    z = 'z';
    au = 'A';
    zu = 'Z';

    int map[z - a + 1];

    for (int i = 0; i < sizeof(map) / sizeof(int); i++)
    {
        map[i] = 0;
    }

    printf("input something:\n");

    while ((c = getchar()) != 10)
    {

        if (c >= a && c <= z)
        {
            n = c - a;
        }
        else if (c >= au && c <= zu)
        {
            n = c - au;
        }

        map[n]++;
    }

    printf("==== histogram ====\n");
    for (int i = 0; i <= z - a; i++)
    {
        printf("%c ", a + i);
        for (int j = 0; j < map[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("===================\n");
}