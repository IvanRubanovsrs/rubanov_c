#include<stdio.h>

void main(){
    for (int i=2; i<=9; i++){
        for (int j=1; j<=9; j++){
            if (i*j>30){
                continue;
            }
            else {printf("%d * %d = %d\n",i, j, i*j);}
        }
        printf(" \n");
    }
    
}