#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");

  char selecao = 0;
  float valor1, valor2;
  float adicao, subtracao, divisao, multiplicacao;

printf("----- CALCULADORA-----\n");
printf("Digite + se deseja fazer uma adi��o\n");   // aqui � o menu para que o usu�rio possa escolher umas das op��es
printf("Digite - se deseja fazer uma subtra��o\n");
printf("Digite / se deseja fazer uma divis�o\n");
printf("Digite * se deseja fazer uma multiplica��o\n");
scanf("%c",&selecao); //armazenamento da escolha

switch (selecao) { //aqui � onde abri os cases que depende da escolha do usu�rio

  case '+':  //aqui � realizado a opera��o de adi��o caso o usu�rio escolha essa no menu
        printf("Digite o primeiro valor para adi��o\n");
        scanf("%f",&valor1);
        printf("Digite o primeiro valor para adi��o\n");
        scanf("%f",&valor2);

        adicao = valor1 + valor2;
        printf("O valor da adi��o �: %.2f\n", adicao);
    break; //serve para encerrar o case

   case '-': //aqui � realizado a opera��o de subtracao caso o usu�rio escolha essa no menu
         printf("Digite o primeiro valor para subtra��o\n");
         scanf("%f",&valor1);
         printf("Digite o primeiro valor para subtra��o\n");
         scanf("%f",&valor2);

         subtracao = valor1 - valor2;
         printf("O valor da adi��o �: %.2f\n", subtracao);
    break;

  case '/': //aqui � realizado a opera��o de divis�o caso o usu�rio escolha essa no menu
          printf("Digite o primeiro valor para divis�o\n");
          scanf("%f",&valor1);
          printf("Digite o primeiro valor para divis�o\n");
          scanf("%f",&valor2);

          divisao = valor1 - valor2;
          printf("O valor da adi��o �: %.2f\n", divisao);
    break;

   case '*': //aqui � realizado a opera��o de multiplica��o caso o usu�rio escolha essa no menu
          printf("Digite o primeiro valor para multiplica��o\n");
          scanf("%f",&valor1);
          printf("Digite o primeiro valor para multiplica��o\n");
          scanf("%f",&valor2);

          multiplicacao = valor1 - valor2;
          printf("O valor da adi��o �: %.2f\n", multiplicacao);
    break;

    default: printf("Por favor, digite somente as op��es disponivel\n"); //isso ser� exibido caso o usu�rio n�o escolha nenhuma op��o
    break;


} //encerra o stwich
      return 0;
    }
