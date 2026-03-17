#include<stdio.h>
void main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            if((i*j)%7==0){
                count+=1;
            }
        }  
    }
    printf("%d", count);
}
//(count/2)+1