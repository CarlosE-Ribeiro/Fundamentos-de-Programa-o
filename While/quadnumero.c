#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main () {
  setlocale(LC_ALL, "");

float number, quad; // variaveis tipo para equções
int rep = 1;

while (rep <= 10) { // condição para abrir loop

printf("Por favor, digite um número:\n"); // pede pro usuario entrar com um valor
scanf("%f",&number); // armazena valor

quad = pow (number, 2); // calcula o quadrado do valor

printf("O quadrado número %.2f é: %.2f\n\n",number,quad); // exibe valor
 rep ++; // dar continuidade no loop

} // while
return 0;
} // main
