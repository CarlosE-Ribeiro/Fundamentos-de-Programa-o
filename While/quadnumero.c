#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main () {
  setlocale(LC_ALL, "");

float number, quad; // variaveis tipo para equ��es
int rep = 1;

while (rep <= 10) { // condi��o para abrir loop

printf("Por favor, digite um n�mero:\n"); // pede pro usuario entrar com um valor
scanf("%f",&number); // armazena valor

quad = pow (number, 2); // calcula o quadrado do valor

printf("O quadrado n�mero %.2f �: %.2f\n\n",number,quad); // exibe valor
 rep ++; // dar continuidade no loop

} // while
return 0;
} // main
