#include<stdio.h>
void main(){
    int n, summ;
    scanf("%d", &n);
    for (int i=0; i<=9; i++){
        summ = 0;
        for (int j=n; j>0; j/=10){
            if(j%10==i){
                summ+=1;
                break;
            }
        }
        printf("кол-во цифр %d = %d\n\n", i, summ);
    }
}