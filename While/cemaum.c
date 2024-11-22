#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");
  int number = 100; //desclaando variavel igual a cem para evitar de obter valor do lixo

  while (number >=1 ) {// while // aqui está sendo criado o laço de repetição desde que number seja maior que um
    printf("%i\n",number); // mostrar todo valor que seja maior que um
    number --; // descrementação para fazer a contagemde 100 a 1
  }// while
  return 0;
}
