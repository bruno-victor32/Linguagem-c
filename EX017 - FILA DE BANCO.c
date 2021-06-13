#include <stdio.h>
#include <locale.h>
#include <time.h>
void main () {
    setlocale(LC_ALL,"Portuguese");
    int ano, dataatual, idade;
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    printf("Em que ano você nasceu? ");
    scanf("%d",&ano);
    dataatual = data->tm_year + 1900;
    idade = dataatual - ano;
    if(idade<65) {
        printf("-----------------------------\n");
        printf("Você tem %d anos, certo?\n",idade);
        printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
        printf("-----------------------------\n");
    }

    if(idade>=65) {
        printf("-----------------------------\n");
        printf("Você tem %d anos, certo?\n",idade);
        printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
        printf("-----------------------------\n");
    }

}
