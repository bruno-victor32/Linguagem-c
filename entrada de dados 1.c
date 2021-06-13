#import <stdio.h>
void main () {
    char r;
    char s;
    printf("Digite so uma letra:");
    fflush(stdin);
    scanf("%c",&r);
    printf("Digite outra letra:");
    fflush(stdin);
    scanf("%c",&s);
    printf("Voce digitou as letras \"%c\" e \"%c\"", r, s);
}
