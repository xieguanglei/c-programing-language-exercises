#include <stdio.h>

#define MAX 100

void escape(char s[], char t[]){

    int i, j;

    for(i=0, j=0; i<MAX; i++){
        switch(s[i]){
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j++] = s[i];
                break;
        }
    }
}


int main(){

    char s[MAX] = "SS\nPP\tO";
    char t[MAX] = "";

    escape(s, t);

    printf("s is:\n%s\n", s);
    printf("t is:\n%s\n", t);

    return 1;
}