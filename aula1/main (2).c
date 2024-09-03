#include <stdio.h>

int main() {
  //declarando as variaveis
  float num1, num2, num3, media;

//entrada de dados
  printf("digite o primeiro número: ");
  scanf("%f", &num1);

  printf("digite o primeiro número:");
  scanf("%f", &num2);

  printf("digite o primeiro número:");
  scanf("%f", &num3);

  //calculo da media
  media = (num1 + num2 + num3) / 3;

  //exibindo o resultado
  printf("a media dos três números é: %.2f\n", media);
  return 0;
}