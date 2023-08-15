#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 21: Faca um programa que dado um numero indique se ele eh um primo ou nao \n");
  printf("--------------------------------------------- \n");

  int counter = 0, selected_num;

  scanf("%d", &selected_num);

  if (selected_num == 1 || selected_num == 2)
  {
    printf("Primo");
    return 0;
  }

  for (int i = 2; i <= selected_num / 2; i++)
  {
    if (selected_num % i == 0)
    {
      counter++;
    }
  }

  if (counter >= 1)
  {
    printf("Nao eh primo");
  }
  else
  {
    printf("Primo");
  }

  return 0;
}