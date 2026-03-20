#include<stdio.h>

void main(){
    int n, isotr = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]<0){
            isotr ++;
            printf("первое отрицательное число - \"%d\", index = %d\n", arr[i], i);
            break;
        }
    }
    if (isotr == 0){
        printf("нет отрицательных чисел");
    }

}