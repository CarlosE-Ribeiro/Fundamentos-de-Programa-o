#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");
  int number= 1; // variavel inical

  while ( number <= 322) { // condi��o que todo numero menor que 322 entra no loop
      if (number % 3 == 0 ) // condi��o para apresentar s� os multiplos de 3
      printf("%i\n", number); // mostrar os valores multiplos de 3
      number ++; // incrementar para dar seguimentos e apresentar os multiplos
  }//while

  return 0;
} // maiin 
