#include <stdio.h>
#include <stdlib.h>

int main()
{
  float height, weight;
  double IMC;

  printf("--------------------------------------------- \n");
  printf("Questao 9: Crie um programa que calcule o IMC de uma pessoa e classifique a pessoa de acordo com seu IMC: Formula: IMC = P/A*A, onde P eh o peso e A eh a altura. \n");
  printf("--------------------------------------------- \n");

  printf("Digite seu peso (kg): ");
  scanf("%f", &weight);

  printf("Digite sua altura (metros): ");
  scanf("%f", &height);

  printf("\n");

  IMC = weight / (height * height);

  if (IMC < 18.5)
  {
    printf("Seu IMC eh %.2f e voce esta abaixo do peso.\n", IMC);
  }
  else
  {
    if (18.6 < IMC && IMC < 24.9)
    {
      printf("Seu IMC eh %.2f e voce esta com o seu peso ideal.\n", IMC);
    }

    else
    {
      if (25 < IMC && IMC < 29.9)
      {
        printf("Seu IMC eh %.2f e voce esta levemente acima do peso.\n", IMC);
      }
      else
      {
        if (30 < IMC && IMC < 34.9)
        {
          printf("Seu IMC eh %.2f e voce esta com obesidade grau 1.\n", IMC);
        }
        else
        {
          if (35 < IMC && IMC < 39.9)
          {
            printf("Seu IMC eh %.2f e voce esta com obesidade grau 2 (severa).\n", IMC);
          }
          else
          {
            printf("Seu IMC eh %.2f e voce esta com obesidade grau 3 (morbida).\n");
          }
        }
      }
    }
  }

  system("pause");
  return 0;
}