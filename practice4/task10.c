#include<stdio.h>

int main(void){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    char *p = str;
    while(p[len] != '\0' && p[len] != '\n'){
        len++;
    }
    for (int i = 0; i<len/2; i++){
        printf("%c", *(p+i));
    }
    printf("\n");
    for (int i = len/2; i<len; i++){
        printf("%c", *(p+i));
    }
}