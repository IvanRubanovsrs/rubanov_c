#include<stdio.h>


int pred (int n){
    int result = 0;
    if(n%3==0){
        result = n;
        return result;
    }
    return 1;
}


 int filter (int n, int arr[], int (*pred)(int)){
    int count = 0;
    for (int i = 0; i<n; i++){
        if (pred(arr[i])!=1){
            arr[count] = pred(arr[i]);
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int size = filter(n, arr, pred);

    if (size == 0)
    {
        printf("нет чисел кратных 3");
    }
    

    for(int i = 0; i< size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}