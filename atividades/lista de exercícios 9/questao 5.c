#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char name[30];
  
  printf("Digite um nome: ");
  fgets(name, 30, stdin);

  for(int i = 0; i < strlen(name); i++){
    if(name[0] == 'a' || name[0] == 
 'A'){
      printf("%c", name[i]);
     }

  }
}