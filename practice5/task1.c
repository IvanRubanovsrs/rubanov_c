#include<stdio.h>

void peresech(int n1, int n2, int arr1[], int arr2[]){
    int size = (n1 < n2) ? n1 : n2;
    int spisok[size];
    int count = 0;
    
    for (int i= 0; i<n1; i++){
        for (int j= 0; j<n2; j++){
            if (arr1[i]==arr2[j])
            {
                spisok[count] = arr1[i];
                count++;
                break;
            }
            
        }
    }
    for (int i = 0; i<count; i++){
        printf("%d ", spisok[i]);
    }    
}

int main(){
    int n1, n2;
    printf("vvedite dlinu massiva 1\n");
    scanf("%d", &n1);
    printf("vvedite dlinu massiva 2\n");
    scanf("%d", &n2);   
    int arr1[n1], arr2[n2];

    printf("vvedite chisla massiva n1\n");
    for (int i = 0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("vvedite chisla massiva n2\n");
    for (int i = 0; i<n2; i++){
        
        scanf("%d", &arr2[i]);
    }

    peresech(n1, n2, arr1, arr2);

    return 0;
}