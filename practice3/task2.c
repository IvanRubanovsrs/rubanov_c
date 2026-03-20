#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int num;
    scanf("%d", &num);
    int max = num;
    arr[0] = num;
    for (int i = 1; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("max = %d\n", max);

}