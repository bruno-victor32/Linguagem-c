#include <stdio.h>
#include <locale.h>
void main() {
    int num1, num2;
    setlocale(LC_ALL,"Portuguese");
    printf("Me diga dois n�meros e eu colocarei \n");
    printf(" os dois em ordem crescente \n");
    printf("\n Primeiro n�mero: ");
    scanf("%d",&num1);
    printf("\n Segundo n�mero: ");
    scanf("%d",&num2);
    if (num1<num2) {
        printf("Os n�meros em ordem s�o %d e %d",num1,num2);
    }else {
        if(num1>num2) {
            printf("Os n�meros em ordem s�o %d e %d",num2,num1);
        }
    }
}
