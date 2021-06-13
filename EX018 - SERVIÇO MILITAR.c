#include <stdio.h>
#include <time.h>
#include <locale.h>
void main() {
    int ano,nasc,idade;
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    ano = data->tm_year + 1900;
    printf("Atualmente estamos no ano de %d.\n",ano);
    printf("Em que ano você nasceu?");
    scanf("%d",&nasc);
    idade = ano - nasc;
    printf("-----------------------------------\n");
    if(idade>=18) {
        printf("Sua idade atual é %d anos\n",idade);
        printf("Já fez 18 anos. Espero sinceramente que você tenha se alistado.\n");
    }else {
         printf("Sua idade atual é %d anos\n",idade);
         printf("Você ainda não tem 18 anos. Não pode se alistar.\n");
    }

}
