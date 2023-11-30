#include <stdio.h>

int pares(int a, int b, int c) {
    int count = 0;

    if(a % 2 == 0) count++;
    if(b % 2 == 0) count++;
    if(c % 2 == 0) count++;

    return count;
}

int main() {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    int par = pares(a, b, c);

    printf("Existem %d numeros pares.\n", par);

    return 0;
}
