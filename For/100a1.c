//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontua��es

  for (int c = 100; c >= 1; c--) { // condi��es para acontecer o loop
    printf("%i\n",c); // o que ser� mostrado em loop
  } // for
  return 0;
} //main
