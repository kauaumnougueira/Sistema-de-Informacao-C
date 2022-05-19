#include<stdio.h>

int main(){
    int age = 0, count = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite a idade: ");
        scanf("%d", &age);
        if(age >= 18){
            count ++;
        }
    }
    printf("%d pessoas são maiores de idade", count);
}
