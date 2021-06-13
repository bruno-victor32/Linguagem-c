#import <stdio.h>
#include <locale.h>
void main () {
    float  terca;
    int num, dobro;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número:\n");
    scanf("%d",&num);
    dobro = num * 2;
    terca = (float)num / 3;
    printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f\n", num, dobro, terca);
}
