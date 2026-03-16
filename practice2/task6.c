#include<stdio.h>
 void main() {
    int n, summ = 0;
    scanf("%d", &n);
    for (int i = 1; i<n; i++){
        if (i%2==0){
            summ += 1;
        }        
    }
    printf("%d\n", summ);

 }