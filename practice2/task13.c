#include <stdio.h>

void main() { 
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num > 10) {
            arr[count] = num;
            count++;
        }
    }
    for (int i=0; i<count; i++){
        printf("%d ", arr[i]);
    }
    
}
