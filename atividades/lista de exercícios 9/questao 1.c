#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char word[100];
  printf("Digite uma palavra/frase curta para ve-la invertida: ");
  fgets(word, 100, stdin);//gets() is deprecated  
  for(int i = strlen(word)-1; i >= 0; i--){
     printf("%c", word[i]);
  }
}