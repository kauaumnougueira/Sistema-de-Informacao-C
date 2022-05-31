#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int lenVet = 5, vet[5], menu[7] = {0,1,2,3,4,5,6}, escolhaMenu, maiorNum, media = 0;
    char escolha,
    zero[20] = {"0. sair"},
    um[40] = {"1. O maior valor"},
    dois[40] = {"2. A média dos valores"},
    tres[50] = {"3. As posições em que existam valores ímpares"},
    quatro[40] = {"4. Os valores dispostos em ordem inversa"},
    cinco[111] = {"5. Buscar número: informe um número e o procure no vetor preenchido, retornando a posição o valor desse número"},
    seis[52] = {"6. Multiplique os valores pelo inverso de seu índice"};

    //leitura do vetor
    for(int i = 0; i < lenVet; i++){
        printf("%i° ", i+1);
        scanf("%i", &vet);
    }

    //escolha para operar ou não
    do{
        printf("Deseja realizar uma nova operação?(s/n) ");
        scanf(" %99[^\n]", &escolha);
        if(escolha == 's'){

            //print do menu (7 VEZES / FEIO)
            printf("Qual operação deseja executar?/n ");
            for(int i = 0; i < 20; i++){
                printf("%c", zero[i]);
            }
            printf("\n");
            for(int i = 0; i < 40; i++){
                printf("%c", um[i]);
            }
            printf("\n");
            for(int i = 0; i < 40; i++){
                printf("%c", dois[i]);
            }
            printf("\n");
            for(int i = 0; i < 50; i++){
                printf("%c", tres[i]);
            }
            printf("\n");
            for(int i = 0; i < 40; i++){
                printf("%c", quatro[i]);
            }
            printf("\n");
            for(int i = 0; i < 110; i++){
                printf("%c", cinco[i]);
            }
            printf("\n");
            for(int i = 0; i < 52; i++){
                printf("%c", seis[i]);
            }
            printf("\n");

            //iniciando o programa (de fato)
            switch (escolhaMenu){
                //encerrar o programa
                case 0:
                    break;
                //mostrar o maior valor
                case 1:
                    for(int i = 0; i < 5; i++){
                        if(vet[i] > maiorNum){
                            maiorNum = vet[i];
                        }
                    }
                    break;
                case 2:
                    for(int i = 0; i < 5; i++){
                        int soma = 0;
                        soma += vet[i];
                        media = soma/5;
                    }
                    break;
                case 3:
            }

        }
    }while(escolha == "s");
}


