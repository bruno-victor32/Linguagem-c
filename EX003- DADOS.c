#import <stdio.h>
#include <locale.h>
void main() {
    char nome[30];
    unsigned int niver;
    float peso;
    setlocale(LC_ALL,"Portuguese");
    printf("Qual � o seu nome? \n");
    fflush(stdin);
    gets(nome);
    printf("Quantos anos voc� tem? \n");
    fflush(stdin);
    scanf("%d",&niver);
    printf("Qual � o seu peso? (kg) \n");
    fflush(stdin);
    scanf("%f",&peso);
    printf("\n");
    printf("------------<<< PROCESSANDO >>>------------\n");
    printf("Muito prazer, %s . Voc� tem %d anos e pesa %.1f kg correto?\n", nome, niver, peso);
    printf("FIM");
}
