#include<stdio.h>
#include <stdbool.h>
 void main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i<n; i++){
        int ifthree = 0;
        for (int j=i; j!=0; j/=10){
            //printf("%d\n", j%10);
            if (j%10==3){
                ifthree=0;
                break;
            }else{ifthree=1;}
        }
        if (ifthree == 1){
            ifthree =i;
        }
        if (ifthree!=0){
            printf("%d\n", ifthree);
        }        
    }
 }