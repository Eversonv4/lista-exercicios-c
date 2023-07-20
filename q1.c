#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  printf("--------------------------------------------- \n");
  printf("Questao 1: Voce esta organizando um bingo e deseja que cada numero sorteado apareca no telao. Faca um programa que dado um numero digitado imprima: \"O numero sorteado foi: X\", onde X e o numero sorteado. \n");
  printf("--------------------------------------------- \n");

  printf("Digite um numero: ");
  scanf("%d", &number);
  printf("\nO numero sorteado foi: %d\n", number);
  system("pause");
  return 0;
}