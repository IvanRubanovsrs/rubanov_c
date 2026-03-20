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
    switc = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = switc;
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    

}