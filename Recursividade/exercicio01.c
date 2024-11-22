//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o recursiva para descobrir o fatorial de n
int fatorial (int numero){
  if(numero == 0){//caso base
    return 1;
  } else {//chamada recursiva
    return numero * fatorial(numero - 1);
  }//else
}//fatorial

//fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int nfatorial = 0;
//chamando fun��o
fatorial(6);
//para exibir o fatorial do par�metros
nfatorial = fatorial(6);
printf("%i\n", nfatorial);

return 0;
}//main
