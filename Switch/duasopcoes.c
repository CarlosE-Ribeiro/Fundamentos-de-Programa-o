#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");
  int opcao =0;
  int  dividendo, resto, idade;

setlocale(LC_ALL, "");
printf("------------BEM VINDO----------\n");// aqui esta sendo o menu para o usuario analisar suas opções
printf(" 1 - verificação para saber se o número é par ou ímpar\n");
printf(" 2 - verificação de maioridade de idade\n");
scanf("%i", &opcao); // armazena a opção escolhida pelo usuário

switch (opcao) { //abertura da possível escolha do usuário

  case 1 :
          printf ("Por favor, digite um numero para saber se e par:\n"); //pedindo para o usuario digitar o numero
          scanf ("%i", &dividendo);// armazenando o numero digitado pelo usuario

          resto = dividendo % 2; // aqui esta sendo realizado a divisÃ£o por 2 e salvado o resto

           if (resto == 0) { //condicoes com o resto igual a 0
               printf("Seu numero %i e par\n",dividendo); //se for mostrara essa mensagem
             } else {
               printf ("Seu numero %i e impar\n", dividendo); // se nao for, mostrara essa
                 }
          break;

  case 2 :
          printf("Por favor, digite sua idade\n"); //pedido para o usuário entrar com a idade
          scanf("%i\n",&idade); //armaenamento de idade

          if (idade > 18) { //condição para saber se a entrada de idade é maior de idade
            printf("A pessoa que pertence a idade digitada não é maior de idade\n");
          } else  {// caso não seja mostrará essa condição
            printf("A pessoa que tem a idade digita é maior de idade\n");
             }
          break;

           default : printf("Por favor, selecione uma opção válidae tente novamente!\n");
          break;
      }

      return 0;
}
