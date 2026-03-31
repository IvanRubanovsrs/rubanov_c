#include<stdio.h>

int main(void){
    int n, maxlen = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++){

        if (arr[i]<0){
            for (int j = i+1; j<n; j++){
                if (arr[j]>0){
                    maxlen++;
                }
            }
        }
        if (arr[i]>0){
            if (arr[i+1]<0){
                maxlen++;
                continue;
            }else{continue;}
        }
    }
    printf("%d", maxlen);
    return 0;
}