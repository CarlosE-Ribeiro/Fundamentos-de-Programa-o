//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int fnumero (int fatorial, int numero){
  for (fatorial = 1; numero > 1; numero = numero - 1) { //condiçaõ para ter o looping
    fatorial = fatorial * numero; // equção para obter o fatorial
  } // for
}//fnumero
// função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int numero, resultado, fatorial;
//para armazenar o valor da main na função
numero = atof(argv[1]);
resultado = fnumero ( fatorial, numero);
//exibindo o fatorial do valor dado pelo usuário
printf("O fatorial de %i é: %i\n", numero, resultado);

    return 0;
}//main
