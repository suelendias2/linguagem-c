#include <math.h> //Importando a biblioteca de matematica
#include <stdio.h>

int main() {
  // criando variaveis
  float a, b, c; // Lados do triangulo

  // Entrada dos dados
  printf("Digite o valor do primeiro lado (b):");
  scanf("%f", &b);

  printf("Digite o valor do segundo lado (c):");
  scanf("%f", &c);

  // Calculando o valor de a
  a = sqrt((b * b) + (c * c));

  // resultado
  printf("A hipotenusa do triangulo e: %.1f\n", a);
  return 0;
}