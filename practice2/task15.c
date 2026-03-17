#include <stdio.h>

void main() { 
    unsigned int n;
    scanf("%u", &n);
    int num0;
    scanf("%d", &num0);
    int min = num0;
    
    for (int i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (min %2 == 1){printf("\nминимального четного нет");}
        if (num < min && num %2 ==0) {
            min = num;
        }
    }
    if (min %2 == 1){printf("\nминимального четного нет");} 
    else{printf("\n%d", min);}   
}
