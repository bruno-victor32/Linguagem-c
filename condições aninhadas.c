#include <stdio.h>
void main() {
    int n1, n2;
    printf ("Primeiro valor 'N1': ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("Segundo valor 'N2': ");
    fflush(stdin);
    scanf("%d",&n2);
    if (n1>n2) {
        printf("O maior valor e 'N1' %d.", n1);
    } else if (n1<n2) {
        printf("O maior valor e 'N2' %d.", n2);
    }  else if (n1==n2) {
        printf("Os dois valores sao iguais!");

    }

}
