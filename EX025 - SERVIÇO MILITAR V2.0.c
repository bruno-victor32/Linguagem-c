#include <stdio.h>
#include <time.h>
#include <locale.h>
void main() {
    int ano,nasc,idade,dif_ano,alist,falt_ano;
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    ano = data->tm_year + 1900;
    printf("Atualmente estamos no ano de %d.\n",ano);
    printf("Em que ano você nasceu? ");
    scanf("%d",&nasc);
    idade = ano - nasc;
    dif_ano = (ano - nasc) - 18;
    alist = nasc + 18;
    falt_ano = 18 - idade;
    printf("-----------------------------------\n");
    if(idade>18) {
        printf("Sua idade atual é %d anos\n",idade);
        printf("Seu alistamento foi em %d.Já se passaram %d anos.\n",alist,dif_ano);
    }else {
        if(idade<18){
            printf("Sua idade atual é %d anos\n",idade);
            printf("Seu alistamento sera em %d.Ainda faltam %d anos.\n",alist,falt_ano);
        }else {
            if(idade==18) {
                 printf("Sua idade atual é %d anos\n",idade);
                printf("Você completou %d exatamente em %d.Vá se alistar!\n",idade,alist);
            }
        }

    }

}
