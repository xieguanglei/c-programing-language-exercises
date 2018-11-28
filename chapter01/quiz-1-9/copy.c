#include <stdio.h>

int main()
{

    int c;

    int flag = 0;

    printf("input something: \n");

    while ((c = getchar()) != 10)
    {

        if (c == 32 || c == 9)
        {
            flag++;
        }
        else
        {
            flag = 0;
        }

        if (flag < 2)
        {
            printf("%c", c);
        }
    }

    printf("\n");
}