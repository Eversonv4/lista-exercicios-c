#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float wall_height, wall_width, tile_height, tile_width;
  double wall_area, tile_area, result;
  printf("--------------------------------------------- \n");
  printf("Questao 10: Calcule quantos azulejos sao necessarios para azulejar uma parede. Eh necessario conhecer a altura da parede (AP), a sua largura (LP), e a altura do azulejo (A) e sua largura (LA). Leia os dados atraves do teclado.\n");
  printf("--------------------------------------------- \n");

  printf("Qual a altura da parede (metros)? ");
  scanf("%f", &wall_height);
  printf("Qual a largura da parede (metros)? ");
  scanf("%f", &wall_width);

  printf("Qual a altura do azulejo (metros)? ");
  scanf("%f", &tile_height);
  printf("Qual a largura do azulejo (metros)? ");
  scanf("%f", &tile_width);

  wall_area = wall_height * wall_width;
  tile_area = tile_height * tile_width;

  result = ceil(wall_area / tile_area);

  printf("\nSao necessarios %.2f azulejos.\n", result);

  system("pause");
  return 0;
}