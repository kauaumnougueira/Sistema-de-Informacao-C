#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float notasAlunos[2][3], menorNota[2][1], maiorNota[2][1];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d° nota do %d° aluno: ", j+1, i+1);
            scanf("%f", &notasAlunos[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
           if(notasAlunos[i][j] < notasAlunos[i][j+1]){
                menorNota[i][0] = notasAlunos[i][j];
                if(notasAlunos[i][j+1] < menorNota[i][0]){
                    menorNota[i][0] = notasAlunos[i][j + 1];
                }
           }else if(notasAlunos[i][j +1] < notasAlunos[i][j+2]){
               menorNota[i][0] = notasAlunos[i][j + 1];

           }else{
                menorNota[i][0] = notasAlunos[i][j + 2];
           }
        }
    }

    for(int i = 0; i < 2; i++){
            printf("a menor nota do %d° aluno: %.2f", i+1, menorNota[i][0]);
    }
}
