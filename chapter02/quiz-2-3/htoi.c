#include <stdio.h>
#include <string.h>

int htoi(char c[])
{
    int n = 0;
    int i;
    int len = strlen(c);

    if (len > 2)
    {
        for (i = 2; i < len; i++)
        {
            n = n * 16;
            if (c[i] >= 'A' && c[i] <= 'F')
            {
                n += c[i] - 'A' + 10;
            }
            else if (c[i] >= 'a' && c[i] <= 'f')
            {
                n += c[i] - 'a' + 10;
            }
            else if (c[i] >= '0' && c[i] <= '9')
            {
                n += c[i] - '0';
            }
        }
    }

    return n;
}

int main()
{
    printf("%s\t%d\n", "0xf", htoi("0xf"));
    printf("%s\t%d\n", "0X1EA4", htoi("0X1EA4"));
    printf("%s\t%d\n", "0x1ea4", htoi("0x1ea4"));
    printf("%s\t%d\n", "0x1c28c", htoi("0x1c28c"));
    printf("%s\t%d\n", "0x21", htoi("0x21"));
    printf("%s\t%d\n", "0XFFF", htoi("0XFFF"));

    return 1;
}