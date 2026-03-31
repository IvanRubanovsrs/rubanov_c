#include<stdio.h>

int main(void) {
    char glasn[] = "AEUIOYaeuioy";
    char str[] = "pidor";
    char *p=str;
    while (*p){
        for (int i=0; i<sizeof(glasn); i++){
            if (glasn[i] == *p){
                *p = '*';
            }
        }
        p++;
    }
    p = str;
    while(*p){
        printf("%c", *p);
        p++;
    }
}