#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*Faça um programa que receba 10 números e ao final exiba o maior valor digitado*/
int main () { // main
  setlocale(LC_ALL, "");

int  contador = 1, valor1 = 0, valornovo;

  printf("Digite outro valor:\n");
  scanf("%i",&valornovo);

while (contador < 10) {

  if (valor1 > valornovo){
    valor1 = valornovo;
    contador --;
  } else
  printf("Digite outro valor:\n");
  scanf("%i",&valor1);
    contador++;
}//while
printf("Maior valor digitado foi: %i\n", valornovo);
contador ++;
    return 0;
  }//main
