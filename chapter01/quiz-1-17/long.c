#include <stdio.h>

#define MAX 1000

#define ENT 10
#define TAB 9
#define BLK 32

int getword(char s[], int limit, int *endFlag)
{
    int len = 0;
    int c;

    for (int i = 0; i < limit; i++)
    {
        c = getchar();
        if (c == ENT)
        {
            *endFlag = 1;
            return i + 1;
        }
        else if (c == TAB || c == BLK)
        {
            return i + 1;
        }
        else
        {
            s[i] = c;
        }
    }

    return limit;
}

int main()
{

    int len, endFlag;
    char c[MAX];

    endFlag = 0;

    printf("input something:\n");
    while (endFlag == 0 && (len = getword(c, MAX, &endFlag)) != -1)
    {
        if (len > 5)
        {
            for (int i = 0; i < len; i++)
            {
                printf("%c", c[i]);
            }
            printf(" ");
        }
    }
    printf("\n");

    return 1;
}
