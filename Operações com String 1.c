#import <stdio.h>
#import <string.h>
void main() {
    char sit[10];
    float media = 10;
    strcpy(sit, (media>=7)?"Aprovado":"Reprovado");
    printf("A situacao do aluno e %s",sit);
}
