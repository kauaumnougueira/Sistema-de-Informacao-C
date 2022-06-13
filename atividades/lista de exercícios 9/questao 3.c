#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char word[100], vowels[10] = "aeiouAEIOU";
  int vowelsCount = 0;
  printf("Digite uma palavra/frase curta: ");
  fgets(word, 100, stdin);//gets() is deprecated  
  for(int i = 0; i < strlen(word); i++){
    for(int j = 0; j < strlen(vowels); j++){
      if(word[i] == vowels[j]){
        vowelsCount++;
        word[i] = 'k';
      }
    }
    printf("%c", word[i]);
  }
    printf("Possui %i vogais", vowelsCount);
}