#include<stdio.h>

void main(){
    int n, summ = 0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        int num;
        scanf("%d", &num);
        if (num%7==0){
            summ++;
        }
    }
    printf("%d", summ);
}