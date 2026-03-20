#include<stdio.h>
void main(){
    int n, summ = 0; 
    scanf("%d", &n);
    int num = n;
    do {
        summ+=n%10;
        n/=10;
    }while (n !=0);
    printf("summ = %d", summ);
}