#import <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num, num2, res, res1,res2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&num);
    printf("Digite o segundo valor: ");
    scanf("%d",&num2);
    res =  num & num2;
    res1 = num | num2;
    res2 = num ^ num2;
    printf("------ OPERACOES BITWISE ------\n");
    printf("Calculando %d & %d é igual a %d \n", num, num2,res );
    printf("Calculando %d | %d é igual a %d \n", num, num2,res1 );
    printf("Calculando %d ^ %d é igual a %d \n", num, num2,res2 );
}
