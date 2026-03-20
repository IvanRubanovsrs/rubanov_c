#include<stdio.h>
void main(){
    int n, flag = 0;
    scanf("%d", &n);
    for (int i = n+1; i>n; i++){
        int summ = 0, ii = i;
        do {
            summ+=ii%10;
            ii/=10;
        }while (ii >0);
 
        if (i%summ==0){
            printf("%d\n", i);
            break;
        }
    }
}