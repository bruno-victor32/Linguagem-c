#import<stdio.h>
#include<locale.h>
void main() {
    char letra ,antes, depois;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite uma letra:\n");
    fflush(stdin);
    letra = getchar();
    antes = letra -1;
    depois = letra + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n",letra, antes, depois);
}
