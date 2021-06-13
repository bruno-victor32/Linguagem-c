#import <stdio.h>
void main() {
    float vel;
    printf("Qual e a sua velocidade? ");
    fflush(stdin);
    scanf("%f",&vel);
    if(vel>=80){
        printf("Voce foi Multado \n");
    }
    printf("Dirija com cuidado ");

}
