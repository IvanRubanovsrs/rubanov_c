#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int arr[n+1];
    int num;
    scanf("%d", &num);
    int max = num, max2 = 0;
    arr[1] = num;
    for (int i = 1; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]>max){
            max2 =max;
            max = arr[i];
        }
    }

    printf("max2 = %d\n", max2);

}