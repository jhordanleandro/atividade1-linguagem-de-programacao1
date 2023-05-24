#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}

