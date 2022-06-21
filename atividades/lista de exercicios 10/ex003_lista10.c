#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que possua uma fun��o que receba 3 notas de um aluno e uma letra. Se
a letra for A a fun��o retorna a m�dia aritm�tica das notas do aluno, se for P, a sua m�dia
ponderada (pesos: 5, 3 e 2)*/

void mediaNotas(float[], char resposta);

main(){
    setlocale(LC_ALL,"Portuguese");
    float nota[3], media;
    char ap;

    for(int i = 0; i < 3; i++){
        printf("digite a nota %d: ", i+1);
        scanf("%f", &nota[i]);
        getchar();
    }

    printf("\nDigite A para ver a média aritm�tica de suas notas ou P para ver a ponderada > ");
    scanf("%c", &ap);

    mediaNotas(nota, ap);
}
void mediaNotas(float nota[3], char resposta){
    if (resposta=='A'){
        float notas = 0.0;
        float mediaA = 0.0;
        for(int i = 0; i < 3; i++){
            notas += nota[i];
            mediaA = notas/3;
        }
        printf("\nA média escolhida foi aritmética e igual a > %.2f ", mediaA);
    }
    else if (resposta == 'P'){
        float mediaP = 0.0;
        mediaP = (nota[0]*5.0 + nota[1]*3.0 + nota[2]*2.0)/ 10.0;
        printf("\nA média escolhida foi ponderada e igual a > %.2f ", mediaP);
    }
}
