#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

float raiz, valor;

printf("Digite o valor para reliazar a raiz²:\n");
scanf("%f", &raiz);

valor = sqrt(raiz);

printf("A raiz e: %.2f\n", valor);


return 0;

}
