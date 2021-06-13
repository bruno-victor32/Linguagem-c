#import <stdio.h>
#import <string.h>
void main() {
    char nome1[30],nome2[30], nome[10];

    printf("Digite o primeiro nome ?\n");
    gets(nome1);
    printf("Digite o segundo nome ?\n");
    gets(nome2);
    int res = strcmp(nome1, nome2);
    strcpy(nome,(res==0)?"Iguais":"Diferente");
    printf("Os nomes sao %s ",nome);


}
