#import <stdio.h>
#import <stdlib.h>
#import <time.h>
void main() {
    srand(time(NULL));
    int num;
    int n = rand() % 5;
    printf("Vou pensar em um numero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual e o seu palpite?\n");
    scanf("%d",&num);
    printf("Eu pensei no numero %d e voce pensou no %d", n, num);
}
