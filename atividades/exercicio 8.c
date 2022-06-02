#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  int lenVet = 5, vet[lenVet], menu[7] = {0, 1, 2, 3, 4, 5, 6}, escolhaMenu, maiorNum = 0, search, imp = 0, j = 0, soma = 0;
  float media = 0.0;
  char escolha;

  // leitura do vetor
  for (int i = 0; i < lenVet; i++) {
    printf("%i° ", i + 1);
    scanf("%i", &vet[i]);
  }

  // espaço das funções

  // mostra o maior valor
  for (int i = 0; i < lenVet; i++) {
    if (vet[i] > maiorNum) {
      maiorNum = vet[i];
    }
  }

  // devolver a média dos valors
  for (int i = 0; i < 5; i++) {
    soma += vet[i];
    media = soma / lenVet;
  }

  //devolve a posição dos valores ímpares
  for (int i = 0; i < lenVet; i++) {
          if (vet[i] % 2 != 0) {
            imp++;
          }
        }
  // escolha para operar ou não
  do {
    printf("\nDeseja realizar uma nova operação?(s/n) ");
    scanf(" %99[^\n]", &escolha);
    if (escolha == 's') {

      // print do menu (7 VEZES / FEIO)
      printf("0. sair\n");
      printf("1. O maior valor\n");
      printf("2. A média dos valores\n");
      printf("3. As posições em que existam valores ímpares\n");
      printf("4. Os valores dispostos em ordem inversa\n");
      printf("5. Buscar número: informe um número e o procure no vetor "
             "preenchido, retornando a posição o valor desse número\n");
      printf("6. Multiplique os valores pelo inverso de seu índice\n");
      printf("Qual operação deseja executar? ");
      scanf("%i", &escolhaMenu);
      // iniciando o programa (de fato)
      switch (escolhaMenu) {
      case 0:
        // encerra o programa
        escolha = 'n';
        break;
      case 1:
        printf("O maior número é: %i", maiorNum);
        break;
      case 2:
        printf("Essa é a média dos números do vetor: %.2f", media);
        break;
      case 3:
          if(imp != 0){
          printf("Essas são as posições que contém números ímpares: ");
            for(int i =0; i < lenVet; i++){
              if(vet[i]%2 !=0){
                printf("%i ", i+1);
                }
            }
        }
        
        break;
      case 4:
        // retorna os valores na ordem inversa de inserção
        for (int i = lenVet - 1; i >= 0; i--) {
          printf("%i ", vet[i]);
        }
        break;
      case 5:
        // procura um número no vetor e retorna o número e a posição
        printf("Informe o valor para procurar no vetor: ");
        scanf("%i", &search);
        for (int i = 0; i < lenVet; i++) {
          if (vet[i] == search) {
            printf("O número %i foi encontrado na posição %i", search, i+1);
          }
        }
        break;
      case 6:
        // retorna os valores multiplicados pelo inverso de seus índices
        for (int i = 0; i < lenVet; i++) {
          printf("%i ", vet[i] * -i);
        }
        break;
      default:
        break;
      }
    }
  } while (escolha == 's');
}
