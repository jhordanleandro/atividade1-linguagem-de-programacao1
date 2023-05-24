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
            printf("Tri�ngulo Equil�tero\n");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("Tri�ngulo Is�sceles\n");
        } else {
            printf("Tri�ngulo Escaleno\n");
        }
    } else {
        printf("Os lados fornecidos n�o formam um tri�ngulo\n");
    }

    return 0;
}
