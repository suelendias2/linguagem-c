#include <stdio.h>

// fazendo a multiplicacao de dois numeros
int main() {
  // declarando as variaveis
  int num1, num2, produto;
  printf("Digite o primeiro numero:");
  scanf("%d", &num1);
  printf("Digite o segundo numero:");
  scanf("%d", &num2);

  // calculando da divisao
  produto = num1 * num2;

  // saida do resultado
  printf("o resultado é: %d\n", produto);

  return 0;
}
