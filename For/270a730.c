//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações
int par; // variaveis para equação

for( int inicial = 270; inicial <= 730; inicial ++) {
  par= inicial % 2; // equação para saber o resto
    if(par == 0) // condicão para saber se é par
        printf("Os números que são pares entre 270 a 730 são: %i\n", inicial); // mostrar o valor
} //for
  return 0;
} // main
