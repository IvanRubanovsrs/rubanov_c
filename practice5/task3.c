#include<stdio.h>

void findstr (char *s, char *p){
    while (*s) {
        char *temp_s = s;
        char *temp_p = p;

        while (*temp_s && *temp_p && *temp_p != '\n' && *temp_s == *temp_p) {
            temp_s++;
            temp_p++;
        }

        if (*temp_p == '\0' || *temp_p == '\n') {
            printf("Podstroka naydena!\n");
            return;
        }
        s++;
    }
    printf("Podstroka NE naydena\n");
}


int main(){
    char str[100];
    printf("vvedite stroku\n");
    fgets(str, sizeof(str), stdin);
    char str2[100];
    printf("vvedite podstroku\n");
    fgets(str2, sizeof(str2), stdin);
    findstr(str, str2);

}