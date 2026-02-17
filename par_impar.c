#include <stdio.h>

int main(){
    int num;

    printf("Digiter o numero:");
    scanf("%d", &num);

    if((num % 2) == 0){
        printf("\nO numero digitado e par\n");
    }else{
        printf("\nO numero digitado e impar\n");
    }
    return 0;
}