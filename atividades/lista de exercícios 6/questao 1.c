#include<stdio.h>

int main(){

    int start = 1, num = 0, contI = 0, contP = 0;

    while(start == 1){
        printf("Digite um número positivo: ");
        scanf("%d", &num);

        if(num >0){
            if(num %2 == 0){
                    contP++;
            }else{
                contI++;
            }
        }else{
            start = 0;
        }
    }
}
