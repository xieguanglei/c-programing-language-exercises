#include <stdio.h>

int main(){
    printf("input something:\n");
    int c = getchar();
    printf("%d\t%d\n", c, c != EOF);
    return 1;
}