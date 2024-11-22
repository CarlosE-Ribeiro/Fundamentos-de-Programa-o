//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//vetor que retorna a multiplica��o de cada posi��o de outros vetores
int *retornar_vetor (int *vetorA, int *vetorB, int n){
  int *vetorC;
  vetorC = (int*) malloc(n * sizeof(int));
for (size_t i = 0; i < n; i++) {
  vetorC[i] = vetorA[i] * vetorB[i];
  }//for
  return vetorC;
}//retornar_vetor
//fun��o main
int main(){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int n;
int *x;
int *vetorA, *vetorB;
//pedindo o us�ario entrar com um valor
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
//fun��o para printar a fun��o
x = retornar_vetor(vetorA, vetorB, n);
for(size_t i = 0; i < n; i++){
  printf("%i\n",x[i]);
}//for

free(x);
return 0;
}//main
