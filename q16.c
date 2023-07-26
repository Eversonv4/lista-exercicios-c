#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 16: Faca um programa que calcule as raizes de uma equacao do segundo grau, dado os inteiros a, b e c. Imprima uma mensagem de erro se nao existir raizes. \n");
  printf("--------------------------------------------- \n");

  int a, b, c;
  double delta, raiz1, raiz2;

  printf("Digite o valor de a: ");
  scanf("%d", &a);

  printf("Digite o valor de b: ");
  scanf("%d", &b);

  printf("Digite o valor de c: ");
  scanf("%d", &c);

  delta = b * b - 4 * a * c;

  if (delta > 0)
  {
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raizes são reais:\n");
    printf("Raiz 1: %.2f\n", raiz1);
    printf("Raiz 2: %.2f\n", raiz2);
  }
  else if (delta == 0)
  {
    raiz1 = raiz2 = -b / (2 * a);
    printf("As raizes sao reais e iguais:\n");
    printf("Raiz: %.2f\n", raiz1);
  }
  else
  {
    printf("As raizes sao complexas. Nao existem raizes reais.\n");
  }

  return 0;
}
