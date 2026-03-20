#include<stdio.h>
void main(){
    int n, summ = 0; 
    scanf("%d", &n);
    int num = n;
    int lenght = 0;
    do{
        lenght++;
        num/=10;
    }while (num!=0);
   
    do {
        int prover = n%10;
        if(prover%2==0){
            summ++;
        }
        n/=10;
    }while (n !=0);
    if (lenght == summ){
        printf("число состоит только из четных чисел", summ);
    }else{printf("число состоит не только из четных чисел", summ);}
}
    