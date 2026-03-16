#include<stdio.h>
 void main() {
    int n;
    scanf("%d", &n);
    for (n; n>1; n--){
        if (n%4==0){
            continue;
        }
        printf("%d\n", n);        
    }
 }  