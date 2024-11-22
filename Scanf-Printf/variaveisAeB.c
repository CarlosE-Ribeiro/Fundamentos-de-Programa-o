#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()  {

int a = 40;
int b = -1;
float adicao;
float multiplicacao;
float subtracao;
float divisao;


adicao = a + b;

printf(" a adicao e: %.2f\n",adicao);

subtracao = a - b;

printf(" a subtracao e: %.2f\n",subtracao);

multiplicacao = a * b;

printf(" a multiplicacao e: %.2f\n",multiplicacao);

divisao = a / b;

printf(" a divisao e: %.2f\n\n",divisao);


printf("agora b encrementando +1\n\n");

 b ++;

 adicao = a + b;

 printf(" a adicao e: %.2f\n",adicao);

 subtracao = a - b;

 printf(" a subtracao e: %.2f\n",subtracao);

 multiplicacao = a * b;

 printf(" a multiplicacao e: %.2f\n",multiplicacao);

 divisao = a / b;

 printf(" a divisao e: %.2f\n",divisao); // não aparece no compilador por não existir divisão por zero.poderia ter um if else e abrir condicaão de error



return 0;


}
