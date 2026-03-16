#include<stdio.h>

void main() {
    int count = 0;
    int num;
        scanf("%d", &num);
    do {
        scanf("%d", &num);
        count++;
    } while (num!=0);
    printf("%d", count);
}