#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char name[30];
  
  printf("Digite um nome: ");
  fgets(name, 30, stdin);

  for(int i = 0; i < 4; i++){
    printf("%c", name[i]);
  }
}
