//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int valor1 = 10, valor2 = 10;
int *ponteiro1, *ponteiro2;
//igualando os ponteiros com os endere�os das vari�veis
ponteiro1 = &valor1;
ponteiro2 = &valor2;
//condi��es para diferenciar se os ponteiros tem o mesmo valor
  if (ponteiro1 > ponteiro2){
    //se o ponteiro 1 tiver o ender�o maior, exibir o conte�do que ele cont�m e o endere�o
    printf("Os ponteiro1 � maior, ponteiro1 = %d e edere�o do ponteiro1 = %p \n", valor1, ponteiro1);
  }else if (ponteiro1 < ponteiro2){
    //se o ponteiro 2 tiver o ender�o maior, exibir o conte�do que ele cont�m e o endere�o
    printf("Os ponteiro2 � maior, ponteiro2 = %d e edere�o do ponteiro2 = %p \n", valor2, ponteiro2);
  }else{
    //se os ponteiros forem iguais, exibir o conte�do que ele cont�m e o endere�o de cada um
    printf("Os ponteiro1 � maior, ponteiro1 = %d e edere�o do ponteiro1 = %p \n", valor1, ponteiro1);
    printf("Os ponteiro1 � maior, ponteiro1 = %d e edere�o do ponteiro1 = %p \n", valor2, ponteiro2);
  }// else
return 0;
}//main
