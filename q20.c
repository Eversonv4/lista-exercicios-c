#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 20: Faca um programa que leia dois numeros inteiros, representando os valores inicio e fim de um intervalo e imprima os multiplos de 5 entre eles \n");
  printf("--------------------------------------------- \n");

  int start, end;

  printf("Digite o valor de inicio: ");
  scanf("%d", &start);

  printf("Digite o valor de fim: ");
  scanf("%d", &end);

  printf("Multiplos de 5 entre %d e %d:\n", start, end);

  for (int i = start; i <= end; i++)
  {
    if (i % 5 == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}