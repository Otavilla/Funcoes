#include <stdio.h>

float calcular_juros(float c, int m, float t) {
    return c * m * t;
}

int main() {
    float c;
    int m;
    float t;

    printf("Digite o valor do empréstimo: ");
    scanf("%f", &c);

    printf("Digite o número de meses: ");
    scanf("%d", &m);

    printf("Digite a taxa de juros: ");
    scanf("%f", &t);

    float juros = calcular_juros(c, m, t);

    printf("Os juros cobrados no empréstimo são: %.2f\n", juros);

    return 0;
}
