#include<stdio.h>


int main(){

    int n = 0;
    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &n);
    int v[n];

    for(int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d", &v[i]);
    }

    for(int i = n; i > 0; i--){
        printf("%d \n", v[i-1]);
    }

}
