//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontua��es
int number, valor_fatorial; // variaveis

  printf("Digite um valor para ser calculado o seu fatorial\n"); //pedir para o usuario inserir um valor
  scanf("%i",&number); //armazenamento do valor

  for ( valor_fatorial = 1; number > 1; number = number - 1) { //condi�a� para ter o looping

    valor_fatorial = valor_fatorial * number; // equ��o para obter o fatorial
  } // for

  printf("O fatorial de %i �: %i\n",number, valor_fatorial); // mostar o valor valor fatorial

return 0;
} //main
