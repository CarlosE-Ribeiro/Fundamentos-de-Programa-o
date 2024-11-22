//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações

  for (int c = 100; c >= 1; c--) { // condições para acontecer o loop
    printf("%i\n",c); // o que será mostrado em loop
  } // for
  return 0;
} //main
