#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num,num1;
    printf("Seu peso na Terra (KG) = ");
    scanf("%d",&num);
    printf("         ESCOLHA UM PLANETA\n");
    printf("===========================\n");
    printf("1        Mercúrio\n");
    printf("2        Vênus\n");
    printf("3        Marte\n");
    printf("4        Júpiter\n");
    printf("5        Saturno\n");
    printf("6        Urano\n");
    printf("===========================\n");
    printf("Digite sua opção => ");
    scanf("%d",&num1);
    switch (num1) {
    case 1:
        printf("-----------------------\n");
        float mer = num * 0.37;
        printf("No planeta MERCÚRIO, seu peso seria %.2f Kg\n",mer);
        printf("-----------------------\n");
        break;
    case 2:
        printf("-----------------------\n");
        float ven = num * 0.88;
        printf("No planeta VÊNUS, seu peso seria %.2f Kg\n",ven);
        printf("-----------------------\n");
        break;
     case 3:
        printf("-----------------------\n");
        float mar = num * 0.38;
        printf("No planeta MARTE, seu peso seria %.2f Kg\n",mar);
        printf("-----------------------\n");
        break;
     case 4:
        printf("-----------------------\n");
        float jup = num * 2.64;
        printf("No planeta JÚPITER, seu peso seria %.2f Kg\n",jup);
        printf("-----------------------\n");
        break;
     case 5:
        printf("-----------------------\n");
        float sat= num * 1.15;
        printf("No planeta SATURNO, seu peso seria %.2f Kg\n",sat);
        printf("-----------------------\n");
        break;
     case 6:
        printf("-----------------------\n");
        float ura = num * 1.17;
        printf("No planeta URANO, seu peso seria %.2f Kg\n",ura);
        printf("-----------------------\n");
        break;
     default:
         printf("----------------------\n");
         printf("Seu peso não pode ser calculado para outros planetas. Tente novamente.\n");
         printf("----------------------\n");
         break;
    }
    printf("VOLTE SEMPRE");
}
