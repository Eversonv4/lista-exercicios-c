#include <stdio.h>
#include <stdlib.h>

int main()
{
  int inputValue, change, fifty, twenty, ten, five, two;
  printf("--------------------------------------------- \n");
  printf("Questao 7: Crie um programa que gerencie a saida de notas em um caixa eletronico. Recebendo a quantia, seu programa deve dizer quantas de cada nota devem ser retiradas. Utilize o criterio da \"distribuicao otima\", ou seja, o menor numero possivel de cedulas. O caixa tem cedulas de R$50, R$20, R$10, R$5 e R$1. \n");
  printf("--------------------------------------------- \n");

  printf("Digite uma quantia: ");
  scanf("%d", &inputValue);

  change = inputValue;
  fifty = change / 50;
  change = change - (fifty * 50);
  twenty = change / 20;
  change = change - (twenty * 20);
  ten = change / 10;
  change = change - (ten * 10);
  five = change / 5;
  change = change - (five * 5);
  two = change / 2;
  change = change - (two * 2);

  printf("\n");
  printf("%d nota(s) de R$ 50,00\n", fifty);
  printf("%d nota(s) de R$ 20,00\n", twenty);
  printf("%d nota(s) de R$ 10,00\n", ten);
  printf("%d nota(s) de R$ 5,00\n", five);
  printf("%d nota(s) de R$ 2,00\n", two);
  printf("%d nota(s) de R$ 1,00\n", change);

  system("pause");
  return 0;
}