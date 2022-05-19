#include<stdio.h>

int main(){
    int num = 0, result = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        result = i * num;
        printf("\n%d x %d = %d", num, i, result);
    }

}
