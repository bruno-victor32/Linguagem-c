#include <stdio.h>
#include <locale.h>
void main() {
    int a, b, c;
    setlocale(LC_ALL,"Portuguese");
    printf("Me diga três números e eu colocarei eles em ordem pra você \n");
    printf("Primeiro número: ");
    scanf("%d",&a);
    printf("Segundo número: ");
    scanf("%d",&b);
    printf("Terceiro número: ");
    scanf("%d",&c);
    printf("------------------\n");
    if(a>b && b>c )  {
        printf("Maior: %d\n",a);
        printf("Intermediario: %d\n",b);
        printf("Menor: %d\n",c);

    }else if (a>c && c>b) {
        printf("Maior: %d\n",a);
        printf("Intermediario: %d\n",c);
        printf("Menor: %d\n",b);
    }else if (b>a && a>c){
        printf("Maior: %d\n",b);
        printf("Intermediario: %d\n",a);
        printf("Menor: %d\n",c);
    }else if (b>c && c>a) {
        printf("Maior: %d\n",b);
        printf("Intermediario: %d\n",c);
        printf("Menor: %d\n",a);
    }else if (c>a && a>b) {
        printf("Maior: %d\n",c);
        printf("Intermediario: %d\n",a);
        printf("Menor: %d\n",b);
    }else if (c>b && b>a) {
        printf("Maior: %d\n",c);
        printf("Intermediario: %d\n",b);
        printf("Menor: %d\n",a);
    }
}
