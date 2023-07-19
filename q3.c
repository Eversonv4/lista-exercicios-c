#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("\n");
  printf("Seu antecessor e: %d\n", num - 1);
  printf("Seu sucessor e: %d\n", num + 1);
  system("pause");
  return 0;
}