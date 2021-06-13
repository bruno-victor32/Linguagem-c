#import <stdio.h>
#include <locale.h>
void main() {
    char nome[30];
    unsigned int niver;
    float peso;
    setlocale(LC_ALL,"Portuguese");
    printf("Qual é o seu nome? \n");
    fflush(stdin);
    gets(nome);
    printf("Quantos anos você tem? \n");
    fflush(stdin);
    scanf("%d",&niver);
    printf("Qual é o seu peso? (kg) \n");
    fflush(stdin);
    scanf("%f",&peso);
    printf("\n");
    printf("------------<<< PROCESSANDO >>>------------\n");
    printf("Muito prazer, %s . Você tem %d anos e pesa %.1f kg correto?\n", nome, niver, peso);
    printf("FIM");
}
