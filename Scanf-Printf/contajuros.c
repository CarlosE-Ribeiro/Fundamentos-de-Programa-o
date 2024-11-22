#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()  {

float juros;
float capital = 500;
float taxa = 0.01;
int mes = 3;


juros = capital * pow(1 + taxa, mes); //calculando o total do investimeno

printf("O valor que voce contem: R$ %.2f\n",juros);



return 0;


}
