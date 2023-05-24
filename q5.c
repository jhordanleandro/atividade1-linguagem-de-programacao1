#include <stdio.h>

int main() {
    float ladoA, ladoB, ladoC;

    printf("Digite o valor do lado A: ");
    scanf("%f", &ladoA);

    printf("Digite o valor do lado B: ");
    scanf("%f", &ladoB);

    printf("Digite o valor do lado C: ");
    scanf("%f", &ladoC);

    if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Triângulo Equilátero\n");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os lados fornecidos não formam um triângulo\n");
    }

    return 0;
}
