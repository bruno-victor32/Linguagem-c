#import <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int a = 14, b = 8;
    int c = (a>b)?1:2;
    printf("O resultado � %d",c);
}
