#include<stdio.h>
void main(){
    int n, summ = 1; 
    scanf("%d", &n);
    int num = n;
    do {
        if (n%10!=0){
            summ*=n%10;
        }
        n/=10;
    }while (n !=0);
    printf("summ = %d", summ);
}