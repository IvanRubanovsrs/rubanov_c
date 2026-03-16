#include<stdio.h>

void main(){
    int n, count = 0;
    scanf("%d", &n);
    for (int i=2; i<n; i++){
        if (n%i==0){
            count++;
        }
    }
    if(count==0){printf("число %d - простое\n", n);} 
    else{printf("число %d - не является простым\n", n);}
    
}