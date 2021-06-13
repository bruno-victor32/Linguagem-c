#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    printf("\nEm que estado do Brasil você nasceu? ");
    fflush(stdin);
    gets(nome);
    if(strcmp(nome,"RJ")== 0 || strcmp(nome,"rj")== 0) {
        printf("Nascendo em RJ você é CARIOCA\n");
    }else if(strcmp(nome,"BA")== 0 || strcmp(nome,"ba")== 0) {
        printf("Nascendo em BA você é BAIANO\n");
    }else if (strcmp(nome,"RN")== 0 || strcmp(nome,"rn")== 0){
        printf("Nascendo em RN você é POTIGUAR\n");
    }else if (strcmp(nome,"SP")== 0 || strcmp(nome,"sp")== 0) {
        printf("Nascendo em SP você é PAULISTA\n");
    }else if (strcmp(nome,"AC")== 0 || strcmp(nome,"ac")== 0){
        printf("Nascendo em AC você é ACRIANO\n");
    }else if (strcmp(nome,"AL")== 0 || strcmp(nome,"al")== 0){
        printf("Nascendo em AL você é ALAGOANO\n");
    }else if (strcmp(nome,"AM")== 0 || strcmp(nome,"am")== 0){
        printf("Nascendo em AM você é AMAPAENSE\n");
    }else if (strcmp(nome,"CE")== 0 || strcmp(nome,"ce")== 0){
        printf("Nascendo em CE você é CEARENSE\n");
    }else  {
        printf("Nascendo em %s você é natural da sua cidade, mas ainda não sei como te chamar!\n",nome);
    }
}


/*Não é possível fazer comparação de strings com “==”, é necessário utilizar a função strcmp(estado,"sp") == 0. Essa função retorna
um inteiro, ele será -1 se a primeira string for “menor” que a segunda, 0 se forem iguais e 1 se a primeira string for “maior” que a segunda.
 Para utilizada é necessário incluir a biblioteca #import <string.h>
*/

