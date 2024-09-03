#include <stdio.h>

int main(void) {
//declarando as variaveis
  int num1, num2, soma;

  //entrada de dados
 printf("digite o primeiro numero:");
  scanf("%d", &num1);

  printf("digite o primeiro numero:");
  scanf("%d", &num2);
  
  //calculo da soma
  soma = num1 + num2;

//saida de resultado
  printf("a soma de %d e %d é: %d\n", num1, num2, soma);
  return 0;
  
  
}