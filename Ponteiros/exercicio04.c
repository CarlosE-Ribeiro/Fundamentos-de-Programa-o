//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int vetor[5];
int ponteiro[5];
int multi[5];
//igualando o vetor a um ponteiro
int *vet_ponteiro = vetor;
//looping que rodará 11 vezes para pedir que usuario ntre com valor para compor o vetor
for (size_t i = 0; i < 5; i++) {
  printf("Digite o %i° valor inteiro:\n", i+1);
  scanf("%i",&vetor[i]);
  multi[i] = vetor[i] * 2;
  }//for
  //looping para exibir o endereço de cada variável que compoe o vetor
for (size_t j = 0; j < 5; j++){
  //vet_ponteiro + j = ponteiro[j]
  if (multi[j] % 2 == 0)
  printf("O valor %i está no endereço %p \n",multi[j], (vet_ponteiro + j));
  }//for
return 0;
}//main
