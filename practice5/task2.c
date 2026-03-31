#include<stdio.h>

void razvorot(char str[]){
    char *p = str;
    int count = 0;
    while(*p){
        printf("%c\n", *p);
        p++;
    }
}

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *p = str;
    int count = 0;
    razvorot(str);
    return 0;
}