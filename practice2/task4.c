#include<stdio.h>
 void main() {
    int n, summ = 0;
    scanf("%d", &n);
    for (int i = 1; i<n; i++){
        if (i%5==0){
            summ += i;
        }        
    }
    printf("%d\n", summ);
 }