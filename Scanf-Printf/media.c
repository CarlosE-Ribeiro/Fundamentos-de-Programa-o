#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

float n1,n2,n3,n4,mdfinal;

printf("digite a nota 1:\n");
scanf ("%f", &n1);

printf("digite a nota 2:\n");
scanf ("%f", &n2);

printf("digite a nota 3:\n");
scanf ("%f", &n3);

printf("digite a nota 4:\n");
scanf ("%f", &n4);

mdfinal = (n1+n2+n3+n4)/4;

printf ("a media e: %.2f\n", mdfinal);


return 0;

}
