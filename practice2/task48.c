#include<stdio.h>
#include<math.h>
void main(){
    int n, summ = 0;
    scanf("%d", &n);
    int num = n;
    for (int i=1; i<=n; i++){
        summ+=i;        
    }
    
    for (int i=1; i<=n; i++){
        int lenght = 0;
    do{
        lenght++;
        i/=10;
    }while (i!=0);
    }
    printf("summ=%d", summ);
}