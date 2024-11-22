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
printf("Digite + se deseja fazer uma adição\n");   // aqui é o menu para que o usuário possa escolher umas das opções
printf("Digite - se deseja fazer uma subtração\n");
printf("Digite / se deseja fazer uma divisão\n");
printf("Digite * se deseja fazer uma multiplicação\n");
scanf("%c",&selecao); //armazenamento da escolha

switch (selecao) { //aqui é onde abri os cases que depende da escolha do usuário

  case '+':  //aqui é realizado a operação de adição caso o usuário escolha essa no menu
        printf("Digite o primeiro valor para adição\n");
        scanf("%f",&valor1);
        printf("Digite o primeiro valor para adição\n");
        scanf("%f",&valor2);

        adicao = valor1 + valor2;
        printf("O valor da adição é: %.2f\n", adicao);
    break; //serve para encerrar o case

   case '-': //aqui é realizado a operação de subtracao caso o usuário escolha essa no menu
         printf("Digite o primeiro valor para subtração\n");
         scanf("%f",&valor1);
         printf("Digite o primeiro valor para subtração\n");
         scanf("%f",&valor2);

         subtracao = valor1 - valor2;
         printf("O valor da adição é: %.2f\n", subtracao);
    break;

  case '/': //aqui é realizado a operação de divisão caso o usuário escolha essa no menu
          printf("Digite o primeiro valor para divisão\n");
          scanf("%f",&valor1);
          printf("Digite o primeiro valor para divisão\n");
          scanf("%f",&valor2);

          divisao = valor1 - valor2;
          printf("O valor da adição é: %.2f\n", divisao);
    break;

   case '*': //aqui é realizado a operação de multiplicação caso o usuário escolha essa no menu
          printf("Digite o primeiro valor para multiplicação\n");
          scanf("%f",&valor1);
          printf("Digite o primeiro valor para multiplicação\n");
          scanf("%f",&valor2);

          multiplicacao = valor1 - valor2;
          printf("O valor da adição é: %.2f\n", multiplicacao);
    break;

    default: printf("Por favor, digite somente as opções disponivel\n"); //isso será exibido caso o usuário não escolha nenhuma opção
    break;


} //encerra o stwich
      return 0;
    }
