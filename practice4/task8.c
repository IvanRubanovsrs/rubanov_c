#include<stdio.h>

int main(void){
    int countnum = 0, countchar = 0;
    char psw[] = "password1";
    char *p = psw;
    while (*p){
        if ((*p>='A'&& *p<='Z')||(*p>='a' && *p<='z')){
            countchar++;
        }
        else if((*p>='0'&& *p<='9')){
            countnum++;
        }
        p++;
    }
    if (countchar>0 && countnum>0){
        printf("allgood");
    }else{printf("nogoon");}
    return 0;
}