#include<stdio.h>

void main(){
    int n, isporyadok =0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i=0; i<n; i++){
        if (arr[i]<=arr[i+1]){
            isporyadok +=1;
        }
    }
    
    if (isporyadok==n){
        printf("YES");
    }else{printf("no");}

}