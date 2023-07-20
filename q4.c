#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number, rest, result;
  printf("--------------------------------------------- \n");
  printf("Questao 4: Faca um programa que inverta um numero inteiro com dois algarismos. \n");
  printf("--------------------------------------------- \n");

  printf("Digite um numero de dois algarismos: ");
  scanf("%d", &number);

  result = number / 10;
  rest = number % 10;

  printf("A inversao do numero %d eh %d\n", number, rest * 10 + result);

  system("pause");
  return 0;
}