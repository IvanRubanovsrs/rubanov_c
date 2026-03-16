#include<stdio.h>

void main(){
    int n, max = 0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        int num;
        scanf("%d", &num);
        if (num%5==0 && num > max){
            max = num;
        }
    }
    if (max == 0){
        printf("нет чисел кратных 5");
    }else {printf("%d\n", max);}
}