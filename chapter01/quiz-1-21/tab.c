#include <stdio.h>

#define ENT 10
#define TAB 9
#define BLK 32
#define TAB_SIZE 8
#define MAX 1000

int main()
{

    int c, i, k;
    char str[MAX];

    i = 0;
    k = 0;

    printf("input something:\n");

    while ((c = getchar()) != ENT)
    {
        str[i] = c;
        
        if (c == '_')
        {
            if (k % TAB_SIZE == TAB_SIZE - 1)
            {
                while (str[i] == '_')
                {
                    i--;
                }
                i++;
                str[i] = '\t';
            }
        }
        
        i++;
        k++;
    }

    for (int j = 0; j < i; j++)
    {
        printf("%c", str[j]);
    }

    printf("\n");

    return 1;
}