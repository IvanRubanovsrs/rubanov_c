#include<stdio.h>

int main(void) {
    char string[] = "pupunya";
    char *p = string;
    while (*p){
        printf("%c\n", *p);
        p++;
    }
}