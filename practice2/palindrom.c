#include<stdio.h>
#include<string.h>
#include <math.h>
void main() {
    int count = 0;
    unsigned long long n, num;
    printf("введите число n, лимит для вводимого числа - 20 символов\n");
    scanf("%llu", &n);
    num=n;
    char arr[50];
    sprintf(arr, "%llu", n);
    int lenght = strlen(arr), len = lenght;
    if ((n/(long long)pow((double)10, (double)lenght-1)) == (n%10)){
        //printf("1=%d, 2=%d\n", n/(long long)pow((double)10, (double)lenght-1)%10, n%10);
        count+=1;
        n/=10;
    }
    for (int i = 1; i<lenght; lenght--){
        //if (sizeof(n)/sizeof(int))
        if ((n/(long long)pow((double)10, (double)lenght-1))%10 == (n%10)){
                //printf("1=%d, 2=%d\n", n/(long long)pow((double)10, (double)lenght-1)%10, n%10);
                count+=1;
                n/=10;
        }
    }
    //printf("count=%d\nlenght/2=%d\n", count, len/2);
    if (count==len/2){
        printf("число %llu - палиндром\n", num);
    }else if(num>1844674407370955161){
        printf("введеное число слишком велико\n");
    }
    else{printf("число %llu не является палиндромом\n", num);}
}