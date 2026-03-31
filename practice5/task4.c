#include<stdio.h>

void isskobachka(char *str){
    int count9 = 0;
    int count0 = 0;
    char *p = str;
    while (*p){
        if(*p=='('){
            count9++;
        }
        else if (*p == ')'){
            count0++;
        }
        p++;
    }
    if (count9 == count0)
    {
        printf("good");        
    }else{printf("KIJIN - BADBAD");}
    
}

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);

    isskobachka(str);
    return 0;
}