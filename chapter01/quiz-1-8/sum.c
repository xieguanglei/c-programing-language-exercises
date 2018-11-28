#include <stdio.h>

int main()
{

    int c;
    int escape, blank;

    escape = 0;
    blank = 0;

    printf("input something:\n");

    while ((c = getchar()) != 10)
    {
        if (c == 32)
        {
            blank++;
        }
        else if (c == 9)
        {
            escape++;
        }
    }

    printf("summary: escape count is %d, blank count is %d\n", escape, blank);

    return 1;
}