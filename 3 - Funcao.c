#include <stdio.h>

int sumPA(int a1, int an, int n) {
    int Sn;

    Sn = n * (a1 + an) / 2;

    return Sn;
}

int main() {
    int a1, an, n;

    printf("Digite o primeiro elemento da PA: ");
    scanf("%d", &a1);

    printf("Digite o %d-esimo elemento da PA: ", n);
    scanf("%d", &an);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int sum = sumPA(a1, an, n);

    printf("A soma dos %d primeiros termos da PA é: %d\n", n, sum);

    return 0;
}
