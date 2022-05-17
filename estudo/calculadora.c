#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char operator;
    float nums[2], result;

    printf("##### CALCULADORA #####");
    printf("Insira a expressão númerica na ordem (número / operador / número): ");
    scanf("%f %c %f", &nums[0], &operator, &nums[1]);

    switch (operator){
        case '+':
            result = nums[0] + nums[1];
            break;
        case '-':
            result = nums[0] - nums[1];
            break;
        case '*':
            result = nums[0] * nums[1];
            break;
        case '/':
            result = nums[0] / nums[1];
            break;
    }


    printf("Resultado = %.2f",result);

}
