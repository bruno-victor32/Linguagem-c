#include <stdio.h>
#include <locale.h>
void main() {
    int num1,num2;
    float carn, carn_final,ferias,ferias_final,crianca,crianca_final,black,black_final,natal,natal_final;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o preço de um produto R$");
    fflush(stdin);
    scanf("%d",&num1);
    printf("              ESCOLHA UM PERÍODO\n");
    printf("================================\n");
    printf("1             Carnaval [+10]\n");
    printf("2             Férias Escolares [+20]\n");
    printf("3             Dia das Crianças [+5]\n");
    printf("4             Black Friday [-30]\n");
    printf("5             Natal [-5]\n");
    printf("================================\n");
    printf("Digite sua opção => ");
    fflush(stdin);
    scanf("%d", &num2);
    carn = (num1 *10)/100;
    carn_final = carn + num1;
    ferias = (num1 *20)/100;
    ferias_final = ferias + num1;
    crianca = (num1 *5)/100;
    crianca_final = crianca + num1;
    black = (num1 *30)/100;
    black_final = num1 - black;
    natal = (num1 *5)/100;
    natal_final = num1 - natal;
    switch(num2) {
    case 1:
        printf("-------------------------------------------------------\n");
        printf("Na época das CARNAVAL,o preço do produto vai para R$ %.2f\n",carn_final);
        printf("-------------------------------------------------------\n");
        break;
    case 2:
        printf("-------------------------------------------------------\n");
        printf("Na época das FÉRIAS,o preço do produto vai para R$ %.2f\n",ferias_final);
        printf("-------------------------------------------------------\n");
        break;
    case 3:
        printf("-------------------------------------------------------\n");
        printf("Na época das DIA DAS CRIANÇAS,o preço do produto vai para R$ %.2f\n",crianca_final);
        printf("-------------------------------------------------------\n");
        break;
    case 4:
        printf("-------------------------------------------------------\n");
        printf("Na época das BLACK FRIDAY,o preço do produto vai para R$ %.2f\n",black_final);
        printf("-------------------------------------------------------\n");
        break;
    case 5:
        printf("-------------------------------------------------------\n");
        printf("Na época das NATAL,o preço do produto vai para R$ %.2f\n",natal_final);
        printf("-------------------------------------------------------\n");
        break;
    default:
        printf("-------------------------------------------------------\n");
        printf("Em épocas assim, mantenha o preço do produto em R$%d,00\n",num1);
        printf("-------------------------------------------------------\n");

    }

}
