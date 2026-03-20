#include<stdio.h>

void main(){
    int n, count=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]%2==0){
            count = 1;
            printf("YES");
            break;
        }
    }
    if (count == 0){
        printf("NO");
    }

}