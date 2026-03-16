#include<stdio.h>
 void main(){
    /*
    int n;
    scanf("%d", &n);
    if (n>=17){printf("17")}else{printf("\n")}
    */
    int n;
    scanf("%d", &n);
    for (int i = 1; i<n; i++){
        if (i%17==0){
            printf("%d\n", i);
            break;
        }        
    }
 }