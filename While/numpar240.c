#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");

  int number = 240, resto; // declara��o de variaveis

while (number < 731) {  // abrindo a condi��o, loop rodar desde que seja menor que 731
  resto = number % 2; // conta para saber os multiplos de 2
  if (resto == 0 )  // aqui para afirmar que o resto seja 0 e pegar s� os pares
  printf("%i\n", number); // mostrar os que passaram pelas condi��es
  number ++; // incrementando para dar continuidade do algoritmo
} //while

      return 0;
} //main
