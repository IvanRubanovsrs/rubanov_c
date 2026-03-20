#include<stdio.h>

void main(){
    int n, num, min, index;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &num);
    min = num;
    arr[0] = num;
    for (int i = 1; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    printf("min = %d, index = %d\n", min, index);

}