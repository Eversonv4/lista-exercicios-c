#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("--------------------------------------------- \n");
  printf("Questao 3: Faca um programa que leia um numero inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior). \n");
  printf("--------------------------------------------- \n");

  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("\n");

  printf("Seu antecessor e: %d\n", num - 1);
  printf("Seu sucessor e: %d\n", num + 1);

  system("pause");
  return 0;
}