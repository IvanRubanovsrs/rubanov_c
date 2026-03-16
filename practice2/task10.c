#include<stdio.h>
 void main() {
    int n, proiz = 1;
    scanf("%d", &n);
    for (int i = 1; i<n; i++){
        if (i%3==0){
            proiz*=i;
        }        
    }
    printf("%d\n", proiz);
 }  