#include<stdio.h>

int main(void) {
    char string[] = "pupunya";
    int lenght = 0;
    char *p = string;
    while (*p){
        lenght+=1;
        p++;
    }
    printf("длина = %d\n", lenght);
}
