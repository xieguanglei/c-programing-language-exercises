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
            return i+1;
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

    char word[MAX];
    char wordRes[MAX];

    int len;
    int lenRes;

    int max = 0;
    int endFlag = 0;

    printf("input something:\n");

    while (endFlag == 0 && (len = getword(word, MAX, &endFlag)) != -1)
    {
        if (len > max)
        {
            max = len;
            for (int i = 0; i < len; i++)
            {
                wordRes[i] = word[i];
            }
        }
    }

    for(int i=0; i<max; i++){
        printf("%c", wordRes[i]);
    }
    printf("\n");


    return 1;
}
