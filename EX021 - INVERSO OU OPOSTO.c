#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");

    float cal,cal1,num;
    printf("Digite um n�mero:  ");
    scanf("%f",&num);
    if(num>=0) {
        cal = (1/ num);
        printf("O inverso de %.0f � igual a %.4f",num, cal);
    }else {
        cal1 = -1 * num ;
        printf("O inverso de %.0f � igual a %.0f\n",num, cal1);
    }
}
