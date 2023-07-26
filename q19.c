#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 19: Faca um programa que imprima todos os numeros impares entre dois numeros dados. \n");
  printf("--------------------------------------------- \n");

  int start, end;

  printf("Digite o numero de inicio: ");
  scanf("%d", &start);

  printf("Digite o numero de fim: ");
  scanf("%d", &end);

  if (start % 2 == 0)
  {
    start++;
  }

  printf("Numeros impares entre %d e %d:\n", start, end);

  for (int i = start; i <= end; i += 2)
  {
    printf("%d\n", i);
  }

  return 0;
}
