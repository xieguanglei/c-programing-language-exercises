#include <stdio.h>

void lower(char s[])
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] >= 'A' && s[i] <= 'Z' ? s[i] - ('A' - 'a') : s[i];
    }
}

int main()
{
    char str[] = "Hello World.";

    lower(str);

    printf("%s\n", str);

    return 1;
}