#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1, num2, num3, minor;
    printf("--------------------------------------------- \n");
    printf("Questao 11: Faca um programa que leia 3 numeros inteiros e imprima o menor deles.\n");
    printf("--------------------------------------------- \n");

    printf("Digite tres numeros \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    minor = num1;

    if (num2 < minor)
    {
        minor = num2;
    }

    if (num3 < minor)
    {
        minor = num3;
    }

    printf("O menor numero e: %d \n", minor);

    system("pause");
    return 0;
}