#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*Fa�a um programa que exiba a soma de todos os n�meros naturais abaixo de 1000 que s�o
m�ltiplos de 3 ou 5*/
int main () { // main
  setlocale(LC_ALL, "");

  int contador1 = 1, somacontador = 0;

  while (contador1 < 1000) {
     if ( contador1 % 3 == 0 || contador1 % 5 == 0) {

     somacontador = somacontador + contador1;
   } contador1 ++;

}

 printf(" A soma entres os multiplos de 3 e 5 no intervalo de 1 a 1000 �: %i\n",somacontador );
return 0 ;
} // main
