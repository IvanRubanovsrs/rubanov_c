#include<stdio.h>
int main(void){
    int count = 1;
    char str[] = "PuPunYa ans";
    char *p = str;
    int pip = *p;
    while(*p){
        if ((int)*p != 32 && (int)*p > 64 && (int)*p <91 && count%2==1){
            *p = (int)*p +32;
        }
        if ((int)*p != 32 && (int)*p > 96 && (int)*p <123 && count%2==0){
            *p = (int)*p - 32;
        }
        p++;
        count++;
    }
    p = str;
    while(*p){
        printf("%c", *p);
        p++;
    }
    return 0;
}