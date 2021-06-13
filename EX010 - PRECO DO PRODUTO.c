#import <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    char produto[30];
    float preco, desconto, preco_novo;
    printf("Produto:\n");
    fflush(stdin);
    gets(produto);
    printf("Preço do %s:",produto);
    fflush(stdin);
    scanf("%f",&preco);
    printf("Desconto: (%%)");
    fflush(stdin);
    scanf("%f",&desconto);
    preco_novo = preco - (preco * desconto /100);
    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f.\n",produto, preco,desconto,preco_novo);
}
