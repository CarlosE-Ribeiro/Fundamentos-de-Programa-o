//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int fnumero (int fatorial, int numero){
  for (fatorial = 1; numero > 1; numero = numero - 1) { //condi�a� para ter o looping
    fatorial = fatorial * numero; // equ��o para obter o fatorial
  } // for
}//fnumero
// fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int numero, resultado, fatorial;
//para armazenar o valor da main na fun��o
numero = atof(argv[1]);
resultado = fnumero ( fatorial, numero);
//exibindo o fatorial do valor dado pelo usu�rio
printf("O fatorial de %i �: %i\n", numero, resultado);

    return 0;
}//main
