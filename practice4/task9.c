#include<stdio.h>

int main(void){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int bol = 0;
    char *p = str;
    while (*p)
    {
        if(*p == *(p+1)){
            printf("da");
            bol++;
            break;
        }
        p++;
    }
    if (bol==0)
    {
        printf("no");
    }
    return 0;
}