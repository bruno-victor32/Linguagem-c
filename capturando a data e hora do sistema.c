#include <stdio.h>
#include <time.h>
void main() {
   time_t t;
   time(&t);
   struct tm *data;
   data = localtime(&t);
   int d = data->tm_mday;
   int m = data->tm_mon+1;
   printf("Estamos no dia %d e no mes %d",d,m);

}
