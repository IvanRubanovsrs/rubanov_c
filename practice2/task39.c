#include<stdio.h>
void main() {
    int n, k;
    printf("введите число n\n");
    scanf("%d", &n);
    printf("введите число k\n");
    scanf("%d", &k);
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            if((i+j)==k){
                printf("%d + %d = %d\n", i, j, k);;
            }
        }  
    }   
}