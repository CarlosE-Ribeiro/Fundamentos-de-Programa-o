//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
 /*Fa�a um programa que receba 10 n�meros e calcule o quadrado desse n�mero (um de cada vez).*/

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontua��es
  float valor, quad; // variaveis para fazer a equa��o

  for(int rep = 0; rep < 10 ; rep ++) { // condi��o de looping para ser repetido 10x

    printf("Digite um n�mero para ser elevado ao quadrado\n"); // pedindo para o usuario entrar com um valor
    scanf("%f", &valor); // armazenando o valor do usuario
    quad = pow(valor,2); // equa��o para elevar o n�mero ao quadrado
    printf("O valor de %.2f^2 �: %.2f\n",valor, quad); // mostrando o resultado da equa��o
  } // for
    return 0;
  } // main
