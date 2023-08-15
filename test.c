#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vicC, empC, golC, pointsC;
  int vicF, empF, golF, pointsF;
  scanf("%d %d %d %d %d %d", &vicC, &empC, &golC, &vicF, &empF, &golF);

  pointsC = (vicC * 3) + empC;
  pointsF = (vicF * 3) + empF;

  if (pointsC > pointsF)
  {
    printf("C");
    return 0;
  }
  else
  {
    printf("F");
    return 0;
  }

  if (pointsC == pointsF && golC == golF)
  {
    printf("Empatados");
    return 0;
  }

  if (pointsC == pointsF && golC != golF)
  {
    if (golC > golF)
    {
      printf("C");
      return 0;
    }
    else
    {
      printf("F");
      return 0;
    }
  }

  return 0;
}