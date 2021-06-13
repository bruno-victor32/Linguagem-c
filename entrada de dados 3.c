#import <stdio.h>
void main() {
    char nome[30];
    char endereco[40];
    printf("Digite seu nome:\n");
    fflush(stdin);
    gets(nome);
    printf("Digite seu endereco:\n");
    fflush(stdin);
    gets(endereco);
    printf("Voce digitou \"%s\"\n", nome);
    printf("Voce digitou o endereco \"%s\"\n", endereco);
}
