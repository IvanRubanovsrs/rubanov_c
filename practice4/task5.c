#include<stdio.h>

int main(void) {
    int count = 0;
    char voskl = '!';
    char str[] = "pi!d!!o!r";
    char *p=str;
    while (*p){
        if (*p==voskl){
            count++;
        }
        p++;
    }
    p = str;
    if (count > 3){
        printf("stop");
    }
    else {while (*p){
        printf("%c", *p);
        p++;
    }}
}