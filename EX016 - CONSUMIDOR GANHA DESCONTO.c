#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    float valor,desconto,valordescontado;
    printf ("Qual foi o valor total das compras? R$");
    scanf("%f",&valor);
    desconto = (valor * 10) / 100;
    valordescontado = valor - desconto;
    printf("------------------------------\n");
    printf("Voc� comprou R$%.2f na nossa loja\n",valor);
    if(valor<500) {
        printf("Volte Sempre!\n");
        printf("------------------------------\n");
    }
    if (valor>=500) {
        printf("=========== ATEN��O ===========\n");
        printf("Por fazer mais de R$500,00 em compras, voc� vai receber R$%.2f de desconto\n", valor,desconto);
        printf("O valor a ser pago � R$%.2f! Volte Sempre!\n",valordescontado);
        printf("------------------------------\n");
    }
}
