#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]<0){
            arr[i] =0;
        }
    }
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    

}