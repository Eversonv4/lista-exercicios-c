#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;
  printf("--------------------------------------------- \n");
  printf("Questao 13 - Faca um programa que leia a idade (valor inteiro) de uma pessoa e informe sua classe eleitoral:\n");
  printf("--------------------------------------------- \n");

  printf("Qual a sua idade? ");
  scanf("%d", &age);

  if (age < 16)
  {
    printf("Voce nao eh um eleitor.\n");
    return 0;
  }

  if (age > 17 && age < 65)
  {
    printf("Voce eh um eleitor obrigatorio.\n");
  }
  else
  {
    printf("Voce eh eleitor obrigatorio.\n");
  }

  return 0;
}