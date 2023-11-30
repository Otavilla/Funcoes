#include <stdio.h>

int soma_maior_menor(int a, int b, int c) {
    int maior = a, menor = a;

    if(b > maior) maior = b;
    if(c > maior) maior = c;

    if(b < menor) menor = b;
    if(c < menor) menor = c;

    return maior + menor;
}

int main() {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    int soma = soma_maior_menor(a, b, c);

    printf("A soma do maior com o menor é: %d\n", soma);

    return 0;
}
