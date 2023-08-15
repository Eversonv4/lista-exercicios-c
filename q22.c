#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf(" Questao 22: Faca um programa que calcule a media de n numeros reais dados \n");
  printf("--------------------------------------------- \n");

  int counter = 0, num, verify = 1;
  float sum = 0;

  while (verify == 1)
  {
    printf("Escolha um numero\n");
    scanf("%d", &num);
    sum += num;
    counter++;

    printf("\nDeseja continuar? [0 = Nao, 1 = Sim]: ");
    scanf("%d", &verify);
  }

  float media = sum / counter;

  printf("\nA media e: %.2f", media);

  printf("\nSAIU");

  return 0;
}