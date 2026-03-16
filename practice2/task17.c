#include<stdio.h>

void main() {
    int num;
        scanf("%d", &num);
    int summ = num;
    do {
        scanf("%d", &num);
        summ+=num;
    } while (num!=0);
    printf("%d", summ);
}