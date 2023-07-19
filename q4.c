#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number, rest, result;
  printf("Digite um número de dois algarismos: ");
  scanf("%d", &number);
  result = number / 10;
  rest = number % 10;
  printf("%d\n", rest * 10 + result);
  return 0;
}