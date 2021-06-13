#include <stdio.h>
#include <locale.h>
void main() {
    int num1, num2;
    setlocale(LC_ALL,"Portuguese");
    printf("Me diga dois números e eu colocarei \n");
    printf(" os dois em ordem crescente \n");
    printf("\n Primeiro número: ");
    scanf("%d",&num1);
    printf("\n Segundo número: ");
    scanf("%d",&num2);
    if (num1<num2) {
        printf("Os números em ordem são %d e %d",num1,num2);
    }else {
        if(num1>num2) {
            printf("Os números em ordem são %d e %d",num2,num1);
        }
    }
}
