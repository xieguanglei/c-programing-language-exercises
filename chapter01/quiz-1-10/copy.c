#include <stdio.h>

int main()
{
    int c;

    printf("input something:\n");

    while ((c = getchar()) != 10)
    {
        if (c == 9)
        {
            printf("\\t");
        }
        else if (c == 92)
        {
            printf("\\\\");
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");

    return 1;
}