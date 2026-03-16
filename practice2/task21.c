#include<stdio.h>

void main(){
    unsigned int n;
    int fact = 1;
    scanf("%u", &n);
    for (int i=2; i<=n; i++){
        if (i%2==0){
            fact*=i;
        }
    }
    if(fact==1){printf("в факториале 1 нет четных чисел");}
    else{printf("%d", fact);}
}