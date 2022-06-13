#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char word[100], vowels[10] = "aeiouAEIOU";
  printf("Digite uma palavra/frase curta para ve-la sem vogais: ");
  fgets(word, 100, stdin);//gets() is deprecated  
  for(int i = 0; i < strlen(word); i++){
     for(int j = 0; j < strlen(vowels); j++){
        if(word[i] == vowels[j]){
          word[i] = ' ';
        }
      }
      printf("%c", word[i]);
        
  }
}