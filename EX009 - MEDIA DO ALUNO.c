#import <stdio.h>
#include <locale.h>
void main () {
    char nome[30];
    float nota1, nota2,media;
    setlocale(LC_ALL, "Portuguese");
    printf("Nome do Aluno:\n");
    fflush(stdin);
    gets (nome);
    printf("Nota 1:\n");
    fflush(stdin);
    scanf("%f",&nota1);
    printf("Nota 2:\n");
    fflush(stdin);
    scanf("%f",&nota2);
    media = (nota1 + nota2)/2;
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f",nome,nota1,nota2,media);

}
