//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
 /*Faça um programa que receba 10 números e calcule o quadrado desse número (um de cada vez).*/

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações
  float valor, quad; // variaveis para fazer a equação

  for(int rep = 0; rep < 10 ; rep ++) { // condição de looping para ser repetido 10x

    printf("Digite um número para ser elevado ao quadrado\n"); // pedindo para o usuario entrar com um valor
    scanf("%f", &valor); // armazenando o valor do usuario
    quad = pow(valor,2); // equação para elevar o número ao quadrado
    printf("O valor de %.2f^2 é: %.2f\n",valor, quad); // mostrando o resultado da equação
  } // for
    return 0;
  } // main
