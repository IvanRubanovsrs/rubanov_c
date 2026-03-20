#include<stdio.h>

void main(){
    int n, summ=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        summ+=arr[i];
    }
    printf("summ = %d\n", summ);

}