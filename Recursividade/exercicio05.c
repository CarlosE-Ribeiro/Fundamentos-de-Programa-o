//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o que converte um n�mero decimal em n�mero bin�rio
int convert_binario(int decimal){
  int n;
  if(decimal/2 != 0){//chamada recursiva
    n = decimal/2;
    convert_binario(n);
    printf("%d",decimal%2);
  }else{//caso base
    printf("%i", decimal%2);
  }//else
}//fun��o convert_binario

//fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//chamando fun��o. e exibindo a convers�o de decimal para bin�rio
convert_binario(20);
printf("\n");
return 0;
}//main
