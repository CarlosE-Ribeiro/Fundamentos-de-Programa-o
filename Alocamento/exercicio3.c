//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//vetor que retorna a multiplicação de cada posição de outros vetores
int *retornar_vetor (int *vetorA, int *vetorB, int n){
  int *vetorC;
  vetorC = (int*) malloc(n * sizeof(int));
for (size_t i = 0; i < n; i++) {
  vetorC[i] = vetorA[i] * vetorB[i];
  }//for
  return vetorC;
}//retornar_vetor
//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int n;
int *x;
int *vetorA, *vetorB;
//pedindo o usúario entrar com um valor
printf("Digite um valor:");
scanf("%i",&n);
//passando tamanho dos valores
vetorA = (int*) malloc(n * sizeof(int));
vetorB = (int*) malloc(n * sizeof(int));
//pedindo valores do primeiro vetor
for(size_t i = 0; i < n; i++){
  printf("Digite o valor do vetorA\n");
  scanf("%i",&vetorA[i]);
}//for
//pedindo valor do segundo vetor
for(size_t i = 0; i < n; i++){
  printf("Digite o valor do vetorB\n");
  scanf("%i",&vetorB[i]);
}//for
//função para printar a função
x = retornar_vetor(vetorA, vetorB, n);
for(size_t i = 0; i < n; i++){
  printf("%i\n",x[i]);
}//for

free(x);
return 0;
}//main
