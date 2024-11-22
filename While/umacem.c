#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");

  int number = 1; // declarando variavel =0 para começar a contar do zero e evitar que tenha lixo

  while ( number <= 100) {// abrindo loop até que a varivel não exibe um valor igual a 500
    printf(" %i\n", number); // mostrando na tela aocntagem feita no loop
    number ++; //incrementador, aqui a variavel sempre soma mais um caso não seja igual a 500
  } // fechando o loop

  return 0;
  }
