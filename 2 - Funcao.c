#include <stdio.h>

float max(float x, float y) {
    if(x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    float x, y;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    float resultado = max(x, y);
    printf("O maior valor eh: %.2f\n", resultado);

    return 0;
}
