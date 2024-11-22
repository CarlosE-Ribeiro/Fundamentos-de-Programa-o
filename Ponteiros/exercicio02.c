//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
float vetor[11];
//igualando o vetor a um ponteiro
float *vet_ponteiro = vetor;
//looping que rodará 11 vezes para pedir que usuario ntre com valor para compor o vetor
for (size_t i = 0; i < 11; i++) {
  printf("Digite o %i° valor decimal:\n", i+1);
  scanf("%f",&vetor[i]);
  }//for
//looping para exibir o endereço de cada variável que compoe o vetor
for (size_t j = 0; j < 11; j++){
 printf("O valor %.2f está no endereço %p \n",vetor[j], (vet_ponteiro + j));
  }//for

return 0;
}//main
