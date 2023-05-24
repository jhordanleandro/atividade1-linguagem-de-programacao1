#include <stdio.h>

int main() {
    float base, altura, perimetro, area;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);

    return 0;
}
