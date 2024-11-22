#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main () {
  setlocale(LC_ALL, "");

float number, quad; // variaveis para contas
int rep = 1; //variavel para o loop

while (rep <= 10) {

printf("Por favor, digite um número:\n"); // pedindo para o usuario entrar com um valor
scanf("%f",&number); // armazenamento do valor escolido pelo usuario

quad = pow (number, 2);  // euqção para calcular o quadrado do valor inserido pelo usuario

printf("A raiz do número %.2f é: %.2f\n\n",number,quad); // mostrar o valor elevado ao quadro
 rep ++; // incrementar para rodar o loop

} // while
return 0;
} //main
