#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, num3, menor;

    printf("Digite tres numeros \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    menor = num1;

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    printf("O menor numero e: %d \n", menor);

    system("pause");
    return 0;
}