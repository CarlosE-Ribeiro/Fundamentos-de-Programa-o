#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
soma dos seus elementos, e apresente o resultado*/

int main () {
  setlocale(LC_ALL, ""); //poder utilizar pontuações

int vetores[8], soma = 0; /// variaveis

for(int i = 0; i < 8; i++){ // laço para o looping rodar 8x
  printf("Digite o %i° valor do vetor:\n",i+1); // pedindo para usuario entrar com valor
  scanf("%i",&vetores[i]); // armazenando valor
  soma += vetores[i]; //somando elemnetos digitados
}//for
printf("A soma dos valores dentro dos vetores: %i\n", soma); // mostando a soma dos valores digitados

return 0;
}//main
