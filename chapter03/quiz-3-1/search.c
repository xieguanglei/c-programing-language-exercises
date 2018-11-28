#include <stdio.h>

int binsearch(int x, int v[], int n)
{
    int low, high, c;

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        c = (low + high) / 2;
        if (v[c] > x)
        {
            high = c - 1;
        }
        else if (v[c] < x)
        {
            low = c + 1;
        }
        else
        {
            return c;
        }
    }

    return -1;
}

int main()
{

    int c[5] = { 0, 3, 7, 9, 10 };

    printf("Bin search result: %d\n", binsearch(3, c, 5));

    return 1;
}