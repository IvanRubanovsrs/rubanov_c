#include<stdio.h>

int main(void){
    char str[] = "pupunya";
    char symbol;
    scanf("%c", &symbol);
    char *p=str;
    while (*p)
    {
        if (*p != symbol){
            printf("%c", *p);
        }
        p++;
    }
    return 0;
}