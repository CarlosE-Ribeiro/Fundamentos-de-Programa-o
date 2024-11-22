#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main () {
  setlocale(LC_ALL, "");

float number, raiz; // variaveis para equação
int rep = 1; // variavel para o loop

while (rep > 0) { // abrindo o loop

  printf("Por favor, digite um número:\n"); // pedindo para usuario entrar com um valor
  scanf("%f",&number); // armazenamento do valor
       if (number > 0) { // condição de que o valor seja maior que zero
       raiz = pow (number, 2); // se for reslver o quadrado do numero
       printf("A raiz do número %.2f é: %.2f\n\n",number,raiz); // mostar o valor do numero elevado ao quadrado
       rep ++; // dar sequencia na repetição
          } else {
              rep = -1; // se valro for menor que zero, parar de rodar o algoritmo
              system("cls");
              }

} // while
return 0;
} //main
