#include<stdio.h>

void main(){
    int n, summ=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++){
        if (i%2==0){
            summ+=arr[i];
        }
    }
    printf("summ = %d\n", summ);

}