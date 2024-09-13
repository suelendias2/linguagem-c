#include <stdio.h>

int main() {
  // declarando as variaveis
  int numeros[5]; // Array de inteiros com 5 elementos
  int soma = 0;   // variavel que recebe a soma dos inteiros
  int i;          // iterador do for

  // entrada de dados: preenchendo o array
  printf("Digite os 5 numeros do Array:\n");
  for (i = 0; i < 5; i++) {
    printf("numero %d:", i + 1);
    scanf("%d", &numeros[1]);
  }

  // calculo dos elementos do array
  for (i = 0; i < 5; i++) {
    soma += numeros[i];
  }

  // exibindo o resultado
  printf("A soma dos numeros é: %d\n" , soma);
  return 0;
}