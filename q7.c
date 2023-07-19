#include <stdio.h>
#include <stdlib.h>

int main()
{
  int inputValue, change, fifty, twenty, ten, five, two;
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
  return 0;
}