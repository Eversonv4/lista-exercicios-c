#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("--------------------------------------------- \n");
  printf("Questao 13 - Faca um programa que leia tres notas (valores reais) de um aluno, calcule sua media aritmetica e imprima uma mensagem dizendo se o aluno foi aprovado, reprovado ou devera fazer prova final. O criterio de aprovacao eh o seguinte:\n");
  printf("--------------------------------------------- \n");

  float note1, note2, note3, result;

  printf("Digite a primeira nota: ");
  scanf("%f", &note1);
  printf("Digite a segunda nota: ");
  scanf("%f", &note2);
  printf("Digite a terceira nota: ");
  scanf("%f", &note3);

  result = (note1 + note2 + note3) / 3;

  if (result >= 7 && result <= 10)
  {
    printf("Sua media foi de %.2f e voce foi aprovado.\n", result);
  }

  if (result < 3)
  {
    printf("Sua media foi de %.2f e voce foi reprovado.\n", result);
  }

  if (result >= 3 && result < 7)
  {
    printf("Sua media foi de %.2f e voce tem direito a prova final.\n", result);
  }

  return 0;
}