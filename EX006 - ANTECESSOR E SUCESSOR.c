#import <stdio.h>
#include <locale.h>
void main() {
    int num, sucessor, antecessor;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um n�mero:\n");
    scanf("%d",&num);
    sucessor = num + 1;
    antecessor = num - 1;
    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.\n", num , antecessor ,sucessor);

}
