//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
float matriz[3][3];
//igualando o vetor a um ponteiro
float *vet_ponteiro = matriz[3];
//looping que rodará 11 vezes para pedir que usuario ntre com valor para compor o vetor
for (size_t j = 0; j < 3; j++){
  for (size_t i = 0; i < 3; i++){
    printf("Digite o %i° valor decimal:\n", i+1);
    scanf("%f",&matriz[j][i]);
  }//for interno
}//for externo
//looping para exibir o endereço de cada variável que compoe o vetor
for (size_t i = 0; i < 3; i++){
  printf("\n");
  for (size_t j = 0; j < 3; j++){
    printf(" %p " ,&matriz[j][i]);
  }//for interno
}//for externo
printf("\n");
return 0;
}//main
