#include<stdio.h>
#include<locale.h>
#include<string.h>

//essa questão utiliza elementos ainda não utilizados em sala, não levar em consideração
//declaring function
char lettersRandomConsonantswap(int letters, char abc[27]);

int main(){
  setlocale(LC_ALL, "Portuguese");
  char word[100], vowels[10] = "aeiouAEIOU", consonant[44] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ", abc[27] = "abcdefghijklmnopqrstuvwxyz", returned;
  int vowelsCount = 0, letters = 0;
  printf("Digite uma palavra/frase curta: ");
  fgets(word, 100, stdin);//gets() is deprecated  
  for(int i = 0; i < strlen(word); i++){
    letters = strlen(word)-1;
    returned = lettersRandomConsonantswap(letters, abc); //retorno da função que escolhe uma letra
    for(int j = 0; j < strlen(vowels); j++){
      if(word[i] == vowels[j]){
        vowelsCount++;
        word[i] = returned;
      }
    }
    printf("%c", word[i]);
  }
    printf("Possui %i vogais", vowelsCount);
}
    //escolhe uma letra de acordo com a quantidade de letras inputadas
  char lettersRandomConsonantswap(int letters, char abc[27]){
    if(letters > strlen(abc)){
      letters = 26;
    }
    return abc[letters-1];
  }