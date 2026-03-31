#include<stdio.h>

int main(void) {
    char string[] = "pupunya";
    int size = sizeof(string);
    char *p = &string[size-2];
    while (*p){
        printf("%c", *p);
        p--;
    }
}