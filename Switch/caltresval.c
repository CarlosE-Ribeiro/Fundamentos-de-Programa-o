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
printf("Digite a equação que deseja:\n");
scanf("%f%c%f",&valor1,&selecao,&valor2); //armazenamento da escolha

switch (selecao) { //aqui é onde abri os cases que depende da escolha do usuário

  case '+':  //aqui é realizado a operação de adição caso o usuário escolha essa no menu
        adicao = valor1 + valor2;
        printf("O valor da adição é: %.2f %c %.2f = %.2f\n", valor1, selecao, valor2,adicao);
    break; //serve para encerrar o case

   case '-': //aqui é realizado a operação de subtracao caso o usuário escolha essa no menu
        subtracao = valor1 - valor2;
        printf("O valor da subtração é: %.2f %c %.2f = %.2f\n",valor1, selecao, valor2, subtracao);
    break;

  case '/': //aqui é realizado a operação de divisão caso o usuário escolha essa no menu
          divisao = valor1 - valor2;
          printf("O valor da divisão é: %.2f %c %.2f = %.2f\n",valor1, selecao, valor2, divisao);
    break;

   case '*': //aqui é realizado a operação de multiplicação caso o usuário escolha essa no menu
          multiplicacao = valor1 - valor2;
          printf("O valor da multiplicação é: %.2f %c %.2f = %.2f\n",valor1, selecao, valor2, multiplicacao);
    break;

    default: printf("Por favor, digite somente as opções disponivel\n"); //isso será exibido caso o usuário não escolha nenhuma opção
    break;


} //encerra o stwich*
      return 0;
    }
