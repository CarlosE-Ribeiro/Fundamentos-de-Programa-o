//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função recursiva para descobrir o fatorial de n
int fatorial (int numero){
  if(numero == 0){//caso base
    return 1;
  } else {//chamada recursiva
    return numero * fatorial(numero - 1);
  }//else
}//fatorial

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int nfatorial = 0;
//chamando função
fatorial(6);
//para exibir o fatorial do parâmetros
nfatorial = fatorial(6);
printf("%i\n", nfatorial);

return 0;
}//main
