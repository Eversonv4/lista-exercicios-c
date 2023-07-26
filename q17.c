#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 17: O usuario vai digitar um numero e o programa vai retornar o dia da semana equivalente ao numero por extenso. \n");
  printf("--------------------------------------------- \n");

  char weekDays[][15] = {"Domingo", "Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado"};

  int day_number;

  printf("Digite um numero de 1 a 7: ");
  scanf("%d", &day_number);

  if (day_number >= 1 && day_number <= 7)
  {
    printf("Dia da semana equivalente: %s\n", weekDays[day_number - 1]);
  }
  else
  {
    printf("Numero invalido. Digite um numero de 1 a 7.\n");
  }

  return 0;
}
