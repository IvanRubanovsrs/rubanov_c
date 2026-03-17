#include<stdio.h>
void main() {
    int n, count;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        count = 0;
        //printf("до проверки i=%d count=%d\n", i, count);
        for (int j = 2; j<i; j++){
            if((i%j)==0){
                count+=1;
                break;
            }
        }
        //printf("после проверки i=%d count=%d\n", i, count);
        if(count==0){
            printf("%d\n", i);
        }  
    }
}