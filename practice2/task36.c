#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        printf("\n");
        for (int j = 1; j<=n; j++){
            if(i==j){
                printf("1 ");
            }
            else{printf("0 ");}
        }  
    }
}