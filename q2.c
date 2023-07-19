#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[20];
  printf("Qual o seu nome? ");
  scanf("%s", &name);
  printf("Seja muito bem vindo(a), %s.\n", name);
  system("pause");
  return 0;
}