#include <stdio.h>
#include <locale.h>
void main() {
    float cal, cal1,km;
    setlocale(LC_ALL,"Portuguese");
    printf("====== TABELA DE PRE�OS ======\n");
    printf("Viagens at� 200km      R$0.50/Km\n");
    printf("Viagens at� 200km      R$0.35/Km\n");
    printf("----------------------------------\n");
    printf("Dist�ncia total da viagem, em Km: ");
    scanf("%f",&km);
    if(km<=200) {
        cal = (km * 0.50);
        printf("Uma viagem %.1f km vai custar R$0.50/Km\n",km);
        printf("Valor Total:R$ %.2f",cal);
    }else {
        cal1 = (km * 0.35);
        printf("Uma viagem %.1f km vai custar R$0.35/Km\n",km);
        printf("Valor Total:R$ %.2f",cal1);
    }
}
