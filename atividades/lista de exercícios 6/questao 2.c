#include<stdio.h>

int main(){
    int nota = 0;

    do{
        printf("Digite uma nota: ");
        scanf("%d", &nota);
        if(nota >= 1 && nota <= 4){
            //atribuição
        }else{
            printf("Nota invalida! repita a votação\n");
        }

    }while(nota != 5);

}

