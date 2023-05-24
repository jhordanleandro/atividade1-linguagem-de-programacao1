#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%f", &num3);

    if (num1 > 0) {
        float raizQuadrada = sqrt(num1);
        printf("Raiz quadrada do primeiro n�mero: %.2f\n", raizQuadrada);
    } else {
        float quadrado = num1 * num1;
        printf("Quadrado do primeiro n�mero: %.2f\n", quadrado);
    }

    if (num2 > 10 && num2 < 100) {
        printf("N�mero est� entre 10 e 100 - intervalo permitido\n");
    }

    if (num3 < num2) {
        float diferenca = num2 - num3;
        printf("Diferen�a entre o segundo e o terceiro n�mero: %.2f\n", diferenca);
    } else {
        float resultado = num3 + 1;
        printf("Terceiro n�mero adicionado de 1: %.2f\n", resultado);
    }

    return 0;
}
