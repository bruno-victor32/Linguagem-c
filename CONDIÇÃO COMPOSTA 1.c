#include <stdio.h>
void main() {
    int n;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%d",&n);
    if(n%2==0) {
        printf("O valor %d e PAR", n);
    } else {
        printf("O valor %d e IMPAR", n);
    }
    printf("\nACABOU!");
}
