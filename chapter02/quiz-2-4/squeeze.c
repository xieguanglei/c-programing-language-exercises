#include <stdio.h>

int hasChar(char s[], char c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return 1;
        }
    }
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    for (i = 0, j = 0; s1[i] != '\0'; i++)
    {
        if (!hasChar(s2, s1[i]))
        {
            s1[j] = s1[i];
            j++;
        }
    }
    s1[j] = '\0';
}

int main()
{

    char s1[] = "This book provides a comprehensive introduction to the modern study of computer algorithms. It presents many algorithms and covers them in considerable depth, yet makes their design and analysis accessible to all levels of readers. We have tried to keep explanations elementary without sacrificing depth of coverage or mathematical rigor.";
    char s2[] = "helloHello";

    printf("squeeze \"%s\" from \"%s\":\n", s2, s1);

    squeeze(s1, s2);

    printf("%s\n", s1);

    return 1;
}