#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time (&t);
    struct tm *data;
    data = localtime(&t);
    int horario;
    float dim;
    horario = data->tm_hour;
    printf("============= CINEMA ESTUDONAUTA =============\n");
    printf("HORÁRIO DO FILME: %dh - PREÇO DO INGRESSO: R$20\n",horario);
    printf("--------------------------------------------------\n");
    printf("Quanto dinheiro você tem? R$");
    scanf("%f",&dim);
    printf("Agora são %d horas\n",horario);
    if(dim>=20) {
        printf("Você consegue comprar o ingresso!");
    }else {
        printf("Infelizmente não é possível comprar o ingresso!\n");
    }
}
