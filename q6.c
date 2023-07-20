#include <stdio.h>
#include <stdlib.h>

int main()
{
  float temp_F;
  double temp_C;

  printf("--------------------------------------------- \n");
  printf("Questao 6: Converter uma temperatura dada em graus Fahrenheit para graus Celsius \n");
  printf("--------------------------------------------- \n");

  printf("Digite uma temperatura em Fahrenheit para converter para Celsius: ");
  scanf("%f", &temp_F);

  temp_C = ((5 * temp_F) - (160)) / 9;

  printf("%.2f graus celsius\n", temp_C);

  system("pause");
  return 0;
}