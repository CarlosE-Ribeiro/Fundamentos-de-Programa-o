#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");
  char selecao, caracter = 0;
  float valor1, valor2;
  float adicao, subtracao, divisao, multiplicacao;

printf("----- CALCULADORA-----\n");
printf("Digite a equa��o que deseja:\n");
scanf("%f%c%f",&valor1,&selecao,&valor2); //armazenamento da escolha

switch (selecao) { //aqui � onde abri os cases que depende da escolha do usu�rio

  case '+':  //aqui � realizado a opera��o de adi��o caso o usu�rio escolha essa no menu
        adicao = valor1 + valor2;
        printf("O valor da adi��o �: %.2f %c %.2f = %.2f\n", valor1, selecao, valor2,adicao);
    break; //serve para encerrar o case

   case '-': //aqui � realizado a opera��o de subtracao caso o usu�rio escolha essa no menu
        subtracao = valor1 - valor2;
        printf("O valor da subtra��o �: %.2f %c %.2f = %.2f\n",valor1, selecao, valor2, subtracao);
    break;

  case '/': //aqui � realizado a opera��o de divis�o caso o usu�rio escolha essa no menu
          divisao = valor1 - valor2;
          printf("O valor da divis�o �: %.2f %c %.2f = %.2f\n",valor1, selecao, valor2, divisao);
    break;

   case '*': //aqui � realizado a opera��o de multiplica��o caso o usu�rio escolha essa no menu
          multiplicacao = valor1 - valor2;
          printf("O valor da multiplica��o �: %.2f %c %.2f = %.2f\n",valor1, selecao, valor2, multiplicacao);
    break;

    default: printf("Por favor, digite somente as op��es disponivel\n"); //isso ser� exibido caso o usu�rio n�o escolha nenhuma op��o
    break;


} //encerra o stwich*
      return 0;
    }
