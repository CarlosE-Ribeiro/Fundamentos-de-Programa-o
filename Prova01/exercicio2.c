//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontua��es

  int  quant_habit, estalada=0, hora =0, resto, minutos=0, segundos; // declara��o de variaveis

  printf("Digite a quantidade de seres que existem no universo\n"); //pedir para inserir a quantidade de seres
  scanf("%i",&quant_habit); // armazenando a quantidade de seres

  do{ // realizar o que estiver dentro enquanto a condi��o esta sendo v�lida
      quant_habit = (quant_habit/2); // dividir a popula��o por dois

      estalada ++; // incrementar em estaladas
  } while(quant_habit > 500); // condi��o para repetir enquanto popula��o for maior que 500

  segundos = estalada * 5; // equa��o segundos
  hora = estalada / 3600; // equaa��o hora
  resto =  estalada % 3600; //equa��o resto
  minutos =  resto / 60; // equa��o minutos

  printf("Ser� %d h %d min %d seg para dizimar o mundo\n", hora, minutos, segundos); // mostar o tempo que ele levou para deixar vico somente 500 seres

  return 0;
} // main
