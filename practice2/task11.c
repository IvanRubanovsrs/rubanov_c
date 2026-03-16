#include<stdio.h>

void main(){
    int n, count = 0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        int num;
        scanf("%d", &num);
        if (num%2==0){
            count+=1;
            continue;
        }
    }
    printf("положительные - %d", count);
}