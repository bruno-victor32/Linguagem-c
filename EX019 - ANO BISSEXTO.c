#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int ano;
    float primcalculo,seccalculo;
    printf("Digite um ano qualquer: ");
    scanf("%d",&ano);
    primcalculo = (ano%4)==0;
    seccalculo  = (ano%100)!=0;
    if(primcalculo && seccalculo) {
        printf("O ano %d � BISSEXTO",ano);
    }else{
        printf("N�o e bissexto");
    }
}
