#include <stdio.h>

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

    int c, flag;

    flag = 0;

    printf("input something:\n");
    while ((c = getchar()) != ENT)
    {
        if (c == TAB || c == BLK)
        {
            c = BLK;
            flag++;
        }
        else
        {
            flag = 0;
        }
        if(flag <= 1){
            printf("%c", c);
        }
    }
    printf("\n");

    return 1;
}