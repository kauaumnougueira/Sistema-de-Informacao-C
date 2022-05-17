#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float salario, tempo;
    //tempo quebrado
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario);
    printf("Digite o tempo de serviço do funcionário: ");
    scanf("%f", &tempo);

    //comparação de salários
    if(salario <= 500.0 && salario >= 0){
        salario += (25/100) * salario;
        printf("O funcionário em questã tem direito a 25%% de REAJUSTE.");
    }else if(salario <= 1000.0 && salario >= 0){
        salario += (20/100) * salario;
        printf("O funcionário em questã tem direito a 20%% de REAJUSTE.");
    }else if(salario <= 1500.0 && salario >= 0){
        salario += (15/100) * salario;
        printf("O funcionário em questã tem direito a 15%% de REAJUSTE.");
    }else if(salario <= 2000.0 && salario >= 0){
        salario += (10/100) * salario;
        printf("O funcionário em questã tem direito a 10%% de REAJUSTE.");
    }else if(salario > 2000 && salario >= 0){
        printf("NÃO tem direito a REAJUSTE :(");
    }else{
        printf("\nThe panic is on!");
        printf("\nNÃoO aceitamos salários negativos kkk");
    }

    //comparação de tempo
    if(tempo < 1.0){
        salario += 100;
        printf("\nSalário final com BÔNUS de 100,00: %.2f", salario);
    }else if(tempo >= 1.0 && tempo <= 3.0){
        salario += 200;
        printf("\nSalário final BÔNUS de 200,00: %.2f", salario);
    }else if(tempo >= 4.0 && tempo <= 6.0){
        salario += 300;
        printf("\nSalário final BÔNUS de 300,00: %.2f", salario);
    }else if(tempo >= 7.0 && tempo <= 10.0){
        salario += 400;
        printf("\nSalário final BÔNUS de 400,00: %.2f", salario);
    }else if(tempo > 10.0){
        salario += 500;
        printf("\nSalário final BÔNUS de 500,00: %.2f", salario);
    }else{
          printf("\nNÃO aceitamos tempo negativos kkk");
    }
}
