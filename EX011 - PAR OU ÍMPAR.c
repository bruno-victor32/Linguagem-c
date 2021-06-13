#import <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número qualquer: ");
    fflush(stdin);
    scanf("%d", &num);
    printf(" O número %d que você digitou é %s. \n", num, (num%2==0)?"PAR":"ÍMPAR");
}
