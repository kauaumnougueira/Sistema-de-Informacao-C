#include<stdio.h>

int main(){
    int nota = 0, errorCount = 0;

    do{
        printf("Digite uma nota: ");
        scanf("%d", &nota);

        if(nota >= 1 && nota <= 4){
            //atribui��o
        }else{
            printf("Nota invalida! repita a vota�ao\n");
            errorCount++;
            if(errorCount == 4){
                printf("Nota invalida digitada mais de 3 vezes! passe a vez para o proximo espectador\n");
            }
        }

    }while(nota != 5);

}
