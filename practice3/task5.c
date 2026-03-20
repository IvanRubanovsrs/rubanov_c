#include<stdio.h>

void main(){
    int n, count=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]<0){
            count++;
        }
    }
    printf("count = %d\n", count);

}