#import <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float media,n1, n2;

    printf ("Primeira nota: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf ("Segunda nota: ");
    fflush(stdin);
    scanf("%f",&n2);
    media = (n1+n2)/2;
    printf("A sua nota é %s",(media>=7)?"Aprovado":"Reprovado");
}
