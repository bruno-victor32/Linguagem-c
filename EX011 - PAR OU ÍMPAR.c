#import <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um n�mero qualquer: ");
    fflush(stdin);
    scanf("%d", &num);
    printf(" O n�mero %d que voc� digitou � %s. \n", num, (num%2==0)?"PAR":"�MPAR");
}
