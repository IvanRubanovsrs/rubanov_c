#include <stdio.h>

int quadro(int n){
    return n*n;
}

void map(int n, int arr[n], int (*q)(int)){
    for (int i = 0; i<n; i++){
        printf("%d ", q(arr[i]));
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    map(n, arr, quadro);
}