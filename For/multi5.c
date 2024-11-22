//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações
  int resto; //variavel para achar resto

  for ( int valor = 1; valor <= 500; valor ++) { //laço de looping para contar até 500

    resto = valor % 5; //conta para saber se o resto
      if (resto == 0) // caso resto seja igual a 0 é multiplicável
      printf("%i\n",valor); // printar o valor
  } // for
    return 0;
  } // main
