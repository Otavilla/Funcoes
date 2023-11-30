#include <stdio.h>
#include <math.h>

void calcular_raizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        float raiz = -b / (2 * a);
        printf("A raiz única é: %.2f\n", raiz);
    } else {
        printf("Não existem raízes.\n");
    }
}

int main() {
    float a, b, c;

    printf("Digite os coeficientes da equação do segundo grau (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    calcular_raizes(a, b, c);

    return 0;
}
