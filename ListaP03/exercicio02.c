//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie uma função que aloque dinamicamente e retorne um vetor de inteiros com o tamanho passado por parâmetros.*/

int *vetor(int tvetor){
  int *cvetor;
   cvetor = malloc(tvetor*sizeof(int));
    return cvetor;
}//vator

//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int tvetor;
int *x;

printf("Digite o tamanho do seu vetor:");
scanf("%i", &tvetor);

vetor(tvetor);
x = vetor(tvetor);
for(int i = 0; i < tvetor; i ++){
  printf("Digite os valores das posições dos vetor:\n");
scanf("%i",&x[i]);
 }//for
 for(int i = 0; i < tvetor; i ++){
 printf("%2i,",x[i]);
  }//for
return 0;
}//main
