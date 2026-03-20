#include<stdio.h>
void main(){
    long long n;
    scanf("%lld", &n);
    int count = 0;
    do{
        count++;
        n/=10;
    }while (n!=0);
    printf("count=%d", count);
}