
#include <stdio.h>

void imprimir_divisores(int num) {
    printf("Os divisores do número %d são: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    imprimir_divisores(num);

    return 0;
}
