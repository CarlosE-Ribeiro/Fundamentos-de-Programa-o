//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, "");
  int tentativa, valor = 500, rep = 0; // variaveis

  do { // o que será executado em lopp
    printf("Digite uma valor:\n"); // pedidno pro usuario entrar com um valor
    scanf("%i", &tentativa); // armazenando valor
    rep ++; //contador do valor inserdo pelo usuario
  } while (tentativa > valor && tentativa < 1000); // restrição para ter o loop. 500> valor <1000

  printf("Você digitou %i vezes valores no intervalo de 500 a 1000\n", rep -1); // exibir o tanto de vezes que ele digitou um valor que estava no intervalo

    return 0;
  } // main
