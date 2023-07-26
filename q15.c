#include <stdio.h>
#include <stdlib.h>

#define NUM_MONTHS 12

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 15: Faca um programa que leia um numero inteiro e informe qual o mes do ano correspondente por extenso. Caso seja um mes invalido, informe ao usuario. \n");
  printf("--------------------------------------------- \n");

  char all_months[12][11] = {
      "Janeiro",
      "Fevereiro",
      "Marco",
      "Abril",
      "Maio",
      "Junho",
      "Julho",
      "Agosto",
      "Setembro",
      "Outubro",
      "Novembro",
      "Dezembro"};
  int month;

  printf("Digite o numero do mes desejado: ");
  scanf("%d", &month);

  if (1 <= month && month <= 12)
  {
    printf("O mes escolhido foi %s \n", all_months[month - 1]);
  }
  else
  {
    printf("Mes invalido! \n");
  }

  return 0;
}