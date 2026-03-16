#include<stdio.h>

void main(){
    int n, summ = 0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        int num;
        scanf("%d", &num);
        if (num%2!=0){
            summ+=num;
        }
    }
    printf("сумма отрицательных - %d", summ);
}