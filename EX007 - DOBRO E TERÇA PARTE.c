#import <stdio.h>
#include <locale.h>
void main () {
    float  terca;
    int num, dobro;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um n�mero:\n");
    scanf("%d",&num);
    dobro = num * 2;
    terca = (float)num / 3;
    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f\n", num, dobro, terca);
}
