#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    printf("Listagem de Alunos\n");
    printf("Nome\t\tNota\n");
    printf("--------------------\n");
    printf("Ana Beatriz     8.5 \n");
    printf("Bianca Martins  9.0 \n");
    printf("Cláudio Sá      5.5 \n");
    printf("Giovana Silva   7.5 \n");
}
