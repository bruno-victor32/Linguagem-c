#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Me diga um n�mero e eu te direi se \n");
    printf("ele � POSITIVO, NEGATIVO ou NULO.\n");
    printf("Digite um n�mero: ");
    scanf("%d",&num);
    if (num>0) {
        printf("\nO valor %d digitado � POSITIVO. \n",num);
    }else {
        if (num<0) {
            printf("\nO valor %d digitado � NEGATIVO. \n",num);
        } else {
            if (num==0) {
                printf("\nO valor %d digitado � NULO. \n",num);
            }
        }
    }
}
