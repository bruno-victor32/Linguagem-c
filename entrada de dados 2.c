#import <stdio.h>
void main () {
    char r;
    char s;
    printf("Digite so uma letra:");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra:");
    fflush(stdin);
    s = getchar();
    printf("Voce digitou as letras \"%c\" e \"%c\"", r, s);
}
