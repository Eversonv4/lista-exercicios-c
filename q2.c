#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[20];
  printf("--------------------------------------------- \n");
  printf("Questao 2: Voce esta organizando um evento e deseja que os seus convidados se sintam importantes. Sendo assim, quando cada convidado chega ao local voce pergunta o nome dele e digita no computador. Entao o nome dele e exibido em um painel luminoso na entrada do salao. A mensagem que aparece e: \"Seja muito bem-vindo Fulano de Tal\", onde Fulano de Tal e o nome da pessoa que chegou. \n");
  printf("--------------------------------------------- \n");

  printf("Qual o seu nome? ");
  scanf("%s", &name);

  printf("\nSeja muito bem vindo(a), %s.\n", name);
  system("pause");
  return 0;
}