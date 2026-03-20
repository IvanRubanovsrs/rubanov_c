#include<stdio.h>
void main(){
    int n;
    long long max = -9223372036854775807;
    scanf("%d", &n);
    do {
        if(n%10>max){
            max = n%10;
        }
        n/=10;
    }while (n !=0);
    printf("max = %d", max);
}