//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontua��es
int par; // variaveis para equa��o

for( int inicial = 270; inicial <= 730; inicial ++) {
  par= inicial % 2; // equa��o para saber o resto
    if(par == 0) // condic�o para saber se � par
        printf("Os n�meros que s�o pares entre 270 a 730 s�o: %i\n", inicial); // mostrar o valor
} //for
  return 0;
} // main
