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
    printf("HOR�RIO DO FILME: %dh - PRE�O DO INGRESSO: R$20\n",horario);
    printf("--------------------------------------------------\n");
    printf("Quanto dinheiro voc� tem? R$");
    scanf("%f",&dim);
    printf("Agora s�o %d horas\n",horario);
    if(dim>=20) {
        printf("Voc� consegue comprar o ingresso!");
    }else {
        printf("Infelizmente n�o � poss�vel comprar o ingresso!\n");
    }
}
