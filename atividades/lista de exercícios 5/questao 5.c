#include<stdio.h>

int main(){
    int num = 0;

    do{
        printf("Digite um n�mero de 1 a 10: ");
        scanf("%d", &num);
    }while(num > 10 || num < 1);
}
