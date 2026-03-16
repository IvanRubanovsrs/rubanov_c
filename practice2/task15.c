#include <stdio.h>

void main() { 
    unsigned int n;
    scanf("%u", &n);
    int num0;
    scanf("%d", &num0);
    int min;
    if (num0%2!=0){min = 1;}else{min = num0;}
    for (int i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num < min && num %2 ==0) {
            min = num;
        }
    }
    if (min == 1){printf("\nминимального четного нет");} 
    else{printf("\n%d", min);}   
}
