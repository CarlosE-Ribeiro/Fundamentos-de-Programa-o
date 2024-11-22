//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações
  float valor_total;
  int quantidade_maca;
  char escolha_menu, verificacao_caracter;

  printf("a-) Preço da maça\n"); // primeir apção do menu
  printf("b-) Verifica vogal\n"); //segunda opção do menu
  scanf("%c",&escolha_menu); // armazenameto da escolha do menu

  switch (escolha_menu) { // abrir opcções diante da escolha no meno

  case 'A': // caso seja primeir apção maiuscula
    case 'a': // caso seja a primeira minucula

          printf("Digite a quantidade de maça que deseja comprar:\n"); //pedindo pra ele entrar com a quantidade de maça
          scanf("%i",&quantidade_maca); //armazenando a quantidade

        if(quantidade_maca <= 0){ //caso seja menor ou igual a zero
           printf("Quantidade de maça inválida...\n"); // mostrar invalidade
         } else
            if(quantidade_maca <= 10){ // se for menor que 10
            valor_total = quantidade_maca * 1; // operação para quando é menor que dez
            printf("O valor a ser pago é:%.2f\n",valor_total); // mostrar valor total
          } else
               if ( quantidade_maca <= 24){ // se for menor que 24
                 valor_total = quantidade_maca * 0.8; // opração quando é menor que 24
              printf("O valor a ser pago é:%.2f\n",valor_total); // mostrar valor
            } else
                 if (quantidade_maca <= 49) { // se for menor que 49
                 valor_total = quantidade_maca * 0.6; // operação para menor de 49
                 printf("O valor a ser pago é:%.2f\n",valor_total); // mostrar valor total
            }  else
                   if (quantidade_maca > 49) {
                  valor_total =quantidade_maca * 0.5; // equação para maior que 49
                  printf("O valor a ser pago é:%.2f\n",valor_total); // mostrar valor total
                }
      break; // encera case da primeira opção
    case 'B': // caso seja segunda apção maiuscula
      case'b':// caso seja a segunda minucula
      setbuf(stdin,NULL);
      printf("Digite a letra para fazer a verificação\n"); // pedir a letra para verificação
      scanf("%c",&verificacao_caracter); // armazenar a letra

       if(verificacao_caracter == 'a' || verificacao_caracter == 'A' || verificacao_caracter == 'e' || verificacao_caracter == 'E' || verificacao_caracter == 'i' || verificacao_caracter == 'I' || verificacao_caracter == 'o' || verificacao_caracter == 'O' || verificacao_caracter == 'u' || verificacao_caracter == 'U') {
         printf("Sua letra '%c' é uma vogal\n",verificacao_caracter); // mostar se é vogal
       } else{
          printf("Sua letra '%c'  não é uma vogal\n",verificacao_caracter); // se for vogal
           }
      break; // encerra case da segunda opção
   default: // caso não seja entre com nenhuma opção
     break;
   } // switch
          return 0;
        }//main
