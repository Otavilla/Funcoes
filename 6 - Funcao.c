#include <stdio.h>

int eh_quadrado(int b, int h) {
    if(b == h) return 1;
    return 0;
}

int main() {
    int b, h;

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de h: ");
    scanf("%d", &h);

    int quadrado = eh_quadrado(b, h);

    if(quadrado == 1) {
        printf("� um quadrado.\n");
    } else {
        printf("N�o � um quadrado.\n");
    }

    return 0;
}
