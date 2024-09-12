#include <stdio.h>

//fazendo a divisao de dois numeros
int main() {
  //declarando as variaveis
  float num1, num2, divisao;
  printf("Digite o primeiro numero:");
  scanf("%f", &num1);
  printf("Digite o segundo numero:");
  scanf("%f", &num2);

  //calculando da divisao
  divisao = num1 / num2;

  //saida do resultado
  printf("o resultado é: %f\n", divisao);
  
  return 0;
}