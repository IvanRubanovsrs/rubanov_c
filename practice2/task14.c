#include <stdio.h>

void main() { 
    unsigned int n;
    scanf("%u", &n);
    int num;
    scanf("%d", &num);
    int max = num;
    for (int i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    } 
    printf("\n%d", max);   
}
