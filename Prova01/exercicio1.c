//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontua��es
  float valor_total;
  int quantidade_maca;
  char escolha_menu, verificacao_caracter;

  printf("a-) Pre�o da ma�a\n"); // primeir ap��o do menu
  printf("b-) Verifica vogal\n"); //segunda op��o do menu
  scanf("%c",&escolha_menu); // armazenameto da escolha do menu

  switch (escolha_menu) { // abrir opc��es diante da escolha no meno

  case 'A': // caso seja primeir ap��o maiuscula
    case 'a': // caso seja a primeira minucula

          printf("Digite a quantidade de ma�a que deseja comprar:\n"); //pedindo pra ele entrar com a quantidade de ma�a
          scanf("%i",&quantidade_maca); //armazenando a quantidade

        if(quantidade_maca <= 0){ //caso seja menor ou igual a zero
           printf("Quantidade de ma�a inv�lida...\n"); // mostrar invalidade
         } else
            if(quantidade_maca <= 10){ // se for menor que 10
            valor_total = quantidade_maca * 1; // opera��o para quando � menor que dez
            printf("O valor a ser pago �:%.2f\n",valor_total); // mostrar valor total
          } else
               if ( quantidade_maca <= 24){ // se for menor que 24
                 valor_total = quantidade_maca * 0.8; // opra��o quando � menor que 24
              printf("O valor a ser pago �:%.2f\n",valor_total); // mostrar valor
            } else
                 if (quantidade_maca <= 49) { // se for menor que 49
                 valor_total = quantidade_maca * 0.6; // opera��o para menor de 49
                 printf("O valor a ser pago �:%.2f\n",valor_total); // mostrar valor total
            }  else
                   if (quantidade_maca > 49) {
                  valor_total =quantidade_maca * 0.5; // equa��o para maior que 49
                  printf("O valor a ser pago �:%.2f\n",valor_total); // mostrar valor total
                }
      break; // encera case da primeira op��o
    case 'B': // caso seja segunda ap��o maiuscula
      case'b':// caso seja a segunda minucula
      setbuf(stdin,NULL);
      printf("Digite a letra para fazer a verifica��o\n"); // pedir a letra para verifica��o
      scanf("%c",&verificacao_caracter); // armazenar a letra

       if(verificacao_caracter == 'a' || verificacao_caracter == 'A' || verificacao_caracter == 'e' || verificacao_caracter == 'E' || verificacao_caracter == 'i' || verificacao_caracter == 'I' || verificacao_caracter == 'o' || verificacao_caracter == 'O' || verificacao_caracter == 'u' || verificacao_caracter == 'U') {
         printf("Sua letra '%c' � uma vogal\n",verificacao_caracter); // mostar se � vogal
       } else{
          printf("Sua letra '%c'  n�o � uma vogal\n",verificacao_caracter); // se for vogal
           }
      break; // encerra case da segunda op��o
   default: // caso n�o seja entre com nenhuma op��o
     break;
   } // switch
          return 0;
        }//main
