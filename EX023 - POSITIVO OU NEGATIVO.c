#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Me diga um número e eu te direi se \n");
    printf("ele é POSITIVO, NEGATIVO ou NULO.\n");
    printf("Digite um número: ");
    scanf("%d",&num);
    if (num>0) {
        printf("\nO valor %d digitado é POSITIVO. \n",num);
    }else {
        if (num<0) {
            printf("\nO valor %d digitado é NEGATIVO. \n",num);
        } else {
            if (num==0) {
                printf("\nO valor %d digitado é NULO. \n",num);
            }
        }
    }
}
