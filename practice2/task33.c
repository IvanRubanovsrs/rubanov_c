#include<stdio.h>
void main() {
    int n, i=0;
    scanf("%d", &n);
    for (n; n>=i; n--){
        printf("\n");
        for (int j = 1; j<=n; j++){
            printf(" * ");
        }  
    }
}