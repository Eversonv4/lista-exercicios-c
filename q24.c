#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 24: Ache a soma de todos numeros naturais multiplos de 3 ou 5 menores que n. \n");
  printf("--------------------------------------------- \n");

  int selected_number, amount = 0;

  printf("Escolha um numero: ");
  scanf("%d", &selected_number);

  for (int i = 6; i < selected_number; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      amount += i;
    }
  }

  printf("O total e: %d", amount);

  return 0;
}