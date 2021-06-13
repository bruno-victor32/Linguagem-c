#import <stdio.h>
void main() {
 unsigned int idade = 33;
 float peso = 85.9;
 char sexo = 'M';
 char *nome = "Adriano";
 char  nome1[] = "Matheus";

 printf("%s , %s e do sexo %c, tem %i anos e pesa %.2fkg", nome,nome1,sexo,idade,peso);
}
