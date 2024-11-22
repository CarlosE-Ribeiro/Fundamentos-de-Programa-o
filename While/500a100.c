#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Faça um programa que receba valores enquanto eles estiverem no intervalo de 500 a 1000.
Ao receber um valor fora da faixa, o programa deverá parar de solicitar valores, exibir quantos valores válidos foram digitados
e finalizar.*/

int main () {
  setlocale(LC_ALL, "");

  int  rep = 0, tentativa = 500; // variaveis

  while (tentativa >= 500 && tentativa <= 1000) { //restringindo as regras para o loop não ser infinito, na qual o valor deve estar no intevlo de 5000 -1000

    printf("Digite um valor:\n"); //pedindo para usuarioentrar co um valor
    scanf("%i",&tentativa); // guardando o valor digitado pelo usuario
    rep ++; //contando as vezes que ele coloca um valorque esta no intervalo
  } // while
    printf("Você digitou %i valores dentro do intervalo\n", rep - 1 ); // mensagem para exibir depois que ele fechar o loop
    return 0;
  } // main
