#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");

  int number, cont = 2, fatorial = 1; // variaveis
  printf("Por favor, digite um n�mero para ser calculado o seu fatorial:\n"); // pedindo para o usuario entrar com valor
  scanf("%i",&number); // armaenando valor do usuario

  while( cont <= number) { //while //condi��o para que semrpre entre entrar um valor maior que o contador ele exibir o fatorial

  fatorial = fatorial * cont; // conta em que calcula o fatorial

  cont ++; //incrementador do cont
}//while

printf("O fatorial de %i �: %i\n", number, fatorial); //onde ir� exibir o valor final do fatorial

return 0;
}
