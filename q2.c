#include <stdio.h>

int main() {
    float base, altura, perimetro, area;

    printf("Digite a base do ret�ngulo: ");
    scanf("%f", &base);

    printf("Digite a altura do ret�ngulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;

    printf("Per�metro: %.2f\n", perimetro);
    printf("�rea: %.2f\n", area);

    return 0;
}
