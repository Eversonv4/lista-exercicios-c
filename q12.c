#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2, num3, aux;
  printf("--------------------------------------------- \n");
  printf("Questao 12: Faca um programa que leia 3 numeros inteiros e os imprima em ordem crescente.\n");
  printf("--------------------------------------------- \n");

  printf("Digite tres numeros \n");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num2 < num1)
  {
    aux = num1;
    num1 = num2;
    num2 = aux;
  }

  if (num3 < num1)
  {
    aux = num1;
    num1 = num3;
    num3 = aux;
  }

  if (num3 < num2)
  {
    aux = num2;
    num2 = num3;
    num3 = aux;
  }

  printf("Os numeros em ordem crescente: %d - %d - %d \n", num1, num2, num3);

  system("pause");
  return 0;
}