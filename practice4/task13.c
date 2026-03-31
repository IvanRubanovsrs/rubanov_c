#include<stdio.h>
int main(void){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    char *p = str;
    while(*p){
        if(*p != *(p+1)){
            printf("%c", *p);
        }
        p++;
    }
    return 0;
    p = str;
}