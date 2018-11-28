#include <stdio.h>

int main()
{

    int c, flag;

    printf("input something:\n");

    flag = 0;

    while ((c = getchar()) != 10)
    {
        if (c == 9)
        {
            flag++;
        }
        else if (c == 32)
        {
            flag++;
        }
        else
        {
            flag = 0;
        }

        if (flag == 0)
        {
            printf("%c", c);
        }
        else if (flag == 1)
        {
            printf("\n");
        }
    }

    printf("\n");

    return 1;
}