//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o que de acordo com o valor n cria n espa�os
int *aloca_vetor (int n){
  int *vetor;
  if (n > 0){
   vetor = (int*) malloc(n * sizeof(int));
   return vetor;
  }else {
    vetor = NULL;
   return vetor;
  }//else
}//aloca_vetor

//fun��o main
int main(){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int n;
int *x;
//pedindo valor e armazenando
printf("Digite um valor:");
scanf("%i",&n);
//chamando e exibindo a fun��o
x = aloca_vetor(n);
for (size_t i = 0; i < n; i++) {
  printf("%i\n",x[i]);
}//for
free(x);
return 0;
}//main
