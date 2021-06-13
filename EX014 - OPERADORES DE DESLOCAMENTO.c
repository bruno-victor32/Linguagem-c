#import <stdio.h>
#include <locale.h>
void main() {
    int num1 , num2, esq, dir;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número: \n");
    fflush(stdin);
    scanf("%d",&num1);
    printf("Digite o deslocamento: \n");
    fflush(stdin);
    scanf("%d",&num2);
    printf("------ OPERACOES SHIFT ------\n");
    dir = num1 >> num2;
    esq = num1 << num2;
    printf("Calculando %d >> %d é igual a %d \n",num1, num2, dir);
    printf("Calculando %d >> %d é igual a %d",num1, num2, esq);

}
