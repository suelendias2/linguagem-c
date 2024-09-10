#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// versao 02 do game advinhação
// criando uma mensagem inicial
// definir as variaveis
// criar o laço de tentativas com as variações de tentativas

int main(void) {
  // mensagem de boas vindas
  printf("seja bem vindo ao jogo de adivinhação");

  // gerando um numero secreto aleatorio
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numeroSecreto = numero % 100;
  int chute;
  int ganhou = 0;
  int tentativas = 1;

  // construindo o loop de repetiçao
  while (ganhou == 0) {
    printf("---tentativa %d---\n", tentativas);
    printf("digite seu chute:");
    scanf("%d", &chute);
    printf("seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);
    int maior = chute > numeroSecreto;

    // verificando os valores do chute
    if (acertou) {
      printf("\nparabens! voce acertou!!!\n");
      ganhou = 1;
    } else if (maior) {
      printf("seu chute foi maior\n");
    } else {
      printf("seu chute foi menor\n");
    }
    tentativas++;
  }
  return 0;
}