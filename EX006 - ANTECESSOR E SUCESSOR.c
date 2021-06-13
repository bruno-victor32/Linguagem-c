#import <stdio.h>
#include <locale.h>
void main() {
    int num, sucessor, antecessor;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número:\n");
    scanf("%d",&num);
    sucessor = num + 1;
    antecessor = num - 1;
    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d.\n", num , antecessor ,sucessor);

}
