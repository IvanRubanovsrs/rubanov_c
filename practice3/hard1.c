#include<stdio.h>

int main(void){
    int n, maxsumm = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i= 0; i<n; i++){
        int summ=0;
        for (int j=i+71; j<n; j++){
            summ+=arr[i]+arr[j];
        }
        if (summ>maxsumm){
            maxsumm = summ;
        }
    }
    printf("%d", maxsumm);
}