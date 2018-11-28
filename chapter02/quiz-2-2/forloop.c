#include <stdio.h>

#define ENT 10

int main()
{

    const int lim = 1000;
    char c;
    int i;

    printf("input something:\n");

    for (i = 0; i < lim - 1; i++)
    {
        c = getchar();
        if (c == ENT)
        {
            break;
        }
        printf("%c", c);
    }

    printf("\n");

    return 1;
}