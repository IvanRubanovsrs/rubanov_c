#include<stdio.h>

void main(){
    int n, count = 0, num_find;
    printf("введите кол-во числе\n");
    scanf("%d", &n);
    printf("введите число для поиска\n");
    scanf("%d", &num_find);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    for (int i=0; i<n; i++){
        if (arr[i] == num_find){
            count++;
        }
    }
    printf("кол-во чисел %d - %d\n", num_find, count);

}