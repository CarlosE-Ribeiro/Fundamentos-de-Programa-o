#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");
  int opcao =0;
  int  dividendo, resto, idade;

setlocale(LC_ALL, "");
printf("------------BEM VINDO----------\n");// aqui esta sendo o menu para o usuario analisar suas op��es
printf(" 1 - verifica��o para saber se o n�mero � par ou �mpar\n");
printf(" 2 - verifica��o de maioridade de idade\n");
scanf("%i", &opcao); // armazena a op��o escolhida pelo usu�rio

switch (opcao) { //abertura da poss�vel escolha do usu�rio

  case 1 :
          printf ("Por favor, digite um numero para saber se e par:\n"); //pedindo para o usuario digitar o numero
          scanf ("%i", &dividendo);// armazenando o numero digitado pelo usuario

          resto = dividendo % 2; // aqui esta sendo realizado a divisão por 2 e salvado o resto

           if (resto == 0) { //condicoes com o resto igual a 0
               printf("Seu numero %i e par\n",dividendo); //se for mostrara essa mensagem
             } else {
               printf ("Seu numero %i e impar\n", dividendo); // se nao for, mostrara essa
                 }
          break;

  case 2 :
          printf("Por favor, digite sua idade\n"); //pedido para o usu�rio entrar com a idade
          scanf("%i\n",&idade); //armaenamento de idade

          if (idade > 18) { //condi��o para saber se a entrada de idade � maior de idade
            printf("A pessoa que pertence a idade digitada n�o � maior de idade\n");
          } else  {// caso n�o seja mostrar� essa condi��o
            printf("A pessoa que tem a idade digita � maior de idade\n");
             }
          break;

           default : printf("Por favor, selecione uma op��o v�lidae tente novamente!\n");
          break;
      }

      return 0;
}
