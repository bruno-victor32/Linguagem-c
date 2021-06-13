#include <stdio.h>
void main() {
    int n;
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Três");
        break;
    case 4:
        printf("Quatro");
        break;
    default:
        printf("Erro !");
        break;
    }
    printf("\nACABOU!");
}
