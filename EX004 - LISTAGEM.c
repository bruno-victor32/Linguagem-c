#import <stdio.h>
#include <locale.h>
void main() {
    char nome[30],nome1[30],nome2[30];
    char sexo1,sexo2,sexo3;
    float nota1,nota2,nota3;
  setlocale(LC_ALL,"Portuguese");
  printf("Cadastrando a primeira pessoa:\n");
  printf("------------------------------\n");
  fflush(stdin);
  printf("NOME:");
  gets(nome);
  printf("SEXO [M/F]:");
  sexo1 = getchar();
  printf("NOTA:");
  scanf("%f",&nota1);
  printf("\n");
  printf("Cadastrando a segunda pessoa:\n");
  printf("------------------------------\n");
  fflush(stdin);
  printf("NOME:");
  gets(nome1);
  printf("SEXO [M/F]:");
  sexo2 = getchar();
  printf("NOTA:");
  scanf("%f",&nota2);
  printf("\n");
  printf("Cadastrando a terceira pessoa:\n");
  printf("------------------------------\n");
  fflush(stdin);
  printf("NOME:");
  gets(nome2);
  printf("SEXO [M/F]:");
  sexo3 = getchar();
  printf("NOTA:");
  scanf("%f",&nota3);
  printf("\n");
  printf("Listagem Completa\n");
  printf("-------------------------------\n");
  printf("NOME                 SEXO  NOTA\n");
  printf("%-20s  %c  %6.1f\n",nome ,sexo1,nota1);
  printf("%-20s  %c  %6.1f\n",nome1 ,sexo2,nota2);
  printf("%-20s  %c  %6.1f\n",nome2 ,sexo3,nota3);
  printf("-------------------------------\n");

}
