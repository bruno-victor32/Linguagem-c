#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    printf("\nEm que estado do Brasil voc� nasceu? ");
    fflush(stdin);
    gets(nome);
    if(strcmp(nome,"RJ")== 0 || strcmp(nome,"rj")== 0) {
        printf("Nascendo em RJ voc� � CARIOCA\n");
    }else if(strcmp(nome,"BA")== 0 || strcmp(nome,"ba")== 0) {
        printf("Nascendo em BA voc� � BAIANO\n");
    }else if (strcmp(nome,"RN")== 0 || strcmp(nome,"rn")== 0){
        printf("Nascendo em RN voc� � POTIGUAR\n");
    }else if (strcmp(nome,"SP")== 0 || strcmp(nome,"sp")== 0) {
        printf("Nascendo em SP voc� � PAULISTA\n");
    }else if (strcmp(nome,"AC")== 0 || strcmp(nome,"ac")== 0){
        printf("Nascendo em AC voc� � ACRIANO\n");
    }else if (strcmp(nome,"AL")== 0 || strcmp(nome,"al")== 0){
        printf("Nascendo em AL voc� � ALAGOANO\n");
    }else if (strcmp(nome,"AM")== 0 || strcmp(nome,"am")== 0){
        printf("Nascendo em AM voc� � AMAPAENSE\n");
    }else if (strcmp(nome,"CE")== 0 || strcmp(nome,"ce")== 0){
        printf("Nascendo em CE voc� � CEARENSE\n");
    }else  {
        printf("Nascendo em %s voc� � natural da sua cidade, mas ainda n�o sei como te chamar!\n",nome);
    }
}


/*N�o � poss�vel fazer compara��o de strings com �==�, � necess�rio utilizar a fun��o strcmp(estado,"sp") == 0. Essa fun��o retorna
um inteiro, ele ser� -1 se a primeira string for �menor� que a segunda, 0 se forem iguais e 1 se a primeira string for �maior� que a segunda.
 Para utilizada � necess�rio incluir a biblioteca #import <string.h>
*/

