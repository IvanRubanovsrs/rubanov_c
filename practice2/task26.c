#include<stdio.h>
 void main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i<n; i++){
        int summcount = 0;
        for (int j=i; j!=0; j/=10){
            //printf("%d\n", j%10);
            summcount+=j%10;
        }
        if (summcount>10){
            printf("%d\n", i);
        }        
    }
 }