#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2,soma,multiplicacao,subtrair;
    float divisao;
    char resp;
    printf("VALOR 1 =");
    fflush(stdin);
    scanf("%d",&n1);
    printf("VALOR 2 = ");
    fflush(stdin);
    scanf("%d",&n2);
    printf("=============================\n");
    printf("+         ADI��O\n");
    printf("-         SUBTRA��O\n");
    printf("*         MULTIPLICA��O\n");
    printf("/         DIVIS�O\n");
    printf("=============================\n");
    printf("Digite sua op��o => ");
    fflush(stdin);
    scanf("%c",&resp);

    switch (resp) {
    case '+':
        printf("+");
        soma = n1+n2;
        printf("---------------------------\n");
        printf("O resultado de %d %c %d � igual a %d ",n1,resp,n2,soma);
        break;
    case '-':
        printf("-");
        subtrair = n1-n2;
        printf("---------------------------\n");
        printf("O resultado de %d %c %d � igual a %d ",n1,resp,n2,subtrair);
        break;
    case '*':
        printf("*");
        multiplicacao = n1*n2;
        printf("---------------------------\n");
        printf("O resultado de %d %c %d � igual a %d ",n1,resp,n2,multiplicacao);
        break;
    case '/':
        printf("/");
        float divisao = (float) n1/ (float) n2;
        printf("---------------------------\n");
        printf("O resultado de %d %c %d � igual a %.2f",n1,resp,n2,divisao);
        break;
    default:
        printf("ERRO!");
        break;

    }

}
