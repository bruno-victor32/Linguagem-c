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
    printf("Em que ano voc� nasceu?");
    scanf("%d",&nasc);
    idade = ano - nasc;
    printf("-----------------------------------\n");
    if(idade>=18) {
        printf("Sua idade atual � %d anos\n",idade);
        printf("J� fez 18 anos. Espero sinceramente que voc� tenha se alistado.\n");
    }else {
         printf("Sua idade atual � %d anos\n",idade);
         printf("Voc� ainda n�o tem 18 anos. N�o pode se alistar.\n");
    }

}
