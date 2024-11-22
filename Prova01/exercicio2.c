//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações

  int  quant_habit, estalada=0, hora =0, resto, minutos=0, segundos; // declaração de variaveis

  printf("Digite a quantidade de seres que existem no universo\n"); //pedir para inserir a quantidade de seres
  scanf("%i",&quant_habit); // armazenando a quantidade de seres

  do{ // realizar o que estiver dentro enquanto a condição esta sendo válida
      quant_habit = (quant_habit/2); // dividir a população por dois

      estalada ++; // incrementar em estaladas
  } while(quant_habit > 500); // condição para repetir enquanto população for maior que 500

  segundos = estalada * 5; // equação segundos
  hora = estalada / 3600; // equaação hora
  resto =  estalada % 3600; //equação resto
  minutos =  resto / 60; // equação minutos

  printf("Será %d h %d min %d seg para dizimar o mundo\n", hora, minutos, segundos); // mostar o tempo que ele levou para deixar vico somente 500 seres

  return 0;
} // main
