#include <stdio.h>
#include <stdlib.h>

int main()
{
  int input, result, fourth, third, second, first, inverted_number;
  printf("--------------------------------------------- \n");
  printf("Questao 5: Faca um programa que inverta um numero inteiro com quatro algarismos. \n");
  printf("--------------------------------------------- \n");

  printf("Digite um numero de quatro algarismos: ");
  scanf("%d", &input);

  fourth = input % 10;
  result = input / 10;
  third = result % 10;
  result = result / 10;
  second = result % 10;
  result = result / 10;
  first = result % 10;

  inverted_number = (fourth * 1000) + (third * 100) + (second * 10) + (first);

  printf("O numero invertido fica: %d\n", inverted_number);

  system("pause");
  return 0;
}