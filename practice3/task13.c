#include<stdio.h>

void main(){
    int n, switc;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    switc = arr[n-1];
    for (int i = n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = switc;
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    

}