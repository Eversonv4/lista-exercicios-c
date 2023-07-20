#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A, B, C, D, result;
  printf("--------------------------------------------- \n");
  printf("Questao 8: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferenca do produto de A e B pelo produto de C e D.\n");
  printf("--------------------------------------------- \n");

  printf("Escolha um numero A: ");
  scanf("%d", &A);
  printf("Escolha um numero B: ");
  scanf("%d", &B);
  printf("Escolha um numero C: ");
  scanf("%d", &C);
  printf("Escolha um numero D: ");
  scanf("%d", &D);

  result = (A * B) - (C * D);

  printf("A diferenca do produto de A e B pelo produto de C e D: \n(A x B) - (C x D) = %d \n", result);

  system("pause");
  return 0;
}