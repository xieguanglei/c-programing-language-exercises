#include <stdio.h>

#define ENT 10
#define TAB 9
#define BLK 32
#define TAB_SIZE 8

int main()
{

    int c, count;

    count = 0;

    while ((c = getchar()) != ENT)
    {
        if (c == TAB)
        {
            while (count % 8 != 0)
            {
                printf("_");
                count++;
            }
        }
        else
        {
            printf("%c", c);
            count++;
        }
    }

    printf("\n");

    return 1;
}