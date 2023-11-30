#include <stdio.h>

void calcular_soma_pares(int a, int b) {
    int soma = 0;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("A soma dos n�meros pares entre %d e %d �: %d\n", a, b, soma);
}

int main() {
    int a, b;

    printf("Digite dois n�meros a e b, onde a � menor que b: ");
    scanf("%d %d", &a, &b);

    calcular_soma_pares(a, b);

    return 0;
}
