#include<stdio.h>

void main(){
    int n, summ=3;
    scanf("%d", &n);
    for (int i=3; i<=n; i++){
        if (n%i==0){
            summ+=i;
        }
    }
    printf("%d\n", summ);
}