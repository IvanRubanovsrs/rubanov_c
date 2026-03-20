#include<stdio.h>

void main(){
    int arr[10];
    for (int i = 1; i<=10; i++){
        int num;
        scanf("%d", &num);
        arr[i-1] = num;
    }

    for (int i=9; i>=0; i--){
        printf("%d\n", arr[i]);
    }


}