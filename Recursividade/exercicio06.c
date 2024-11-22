//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// A funçãox faz a soma da recursiva, ou seja, se o valor de entrada for 4, vai ficar 4+3 = 7, 7+2 = 9 e por último 9+1 =10

//função que faz a soma do valor n-1 em diante
int funcaox2(int c){
  int soma=0;
  for (c; c > 0; c--){
     soma += c;
  } //for
  return soma;
}//funcaox2

//função main
int main(int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int x;
//chamando a função e exibindo o valor da mesma
 x =funcaox2(4);
 printf("%i\n", x);
return 0;
}//main
