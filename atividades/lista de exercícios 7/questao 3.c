#include<stdio.h>


int main(){

    int n = 10, v[n], countPar = 0;

    for(int i = 0; i < n; i++){
        printf("digite o %d° numero: ", i+1);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < n; i++){
      if(v[i] %2 == 0){
        countPar++;
      }
    }
    printf("Numeros pares no vetor: %d", countPar);
}
