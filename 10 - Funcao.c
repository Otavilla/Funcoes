#include <stdio.h>

void calcular_soma_pares(int a, int b) {
    int soma = 0;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("A soma dos números pares entre %d e %d é: %d\n", a, b, soma);
}

int main() {
    int a, b;

    printf("Digite dois números a e b, onde a é menor que b: ");
    scanf("%d %d", &a, &b);

    calcular_soma_pares(a, b);

    return 0;
}
