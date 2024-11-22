#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>


int main ()  {

float km, distancia, tempo;

tempo = (float)35/60; //isso é a conversão de minutos para horas.(float) pora forçar uma saída float, já que a entrada são inteiros é perigoso dar conflito.

distancia = tempo * 80; //para calcular a distância que o carro traçou.

km = distancia / 12; // para saber quantos Km/litro o carro fez

printf ("A quantidade de litro gasta pela viagem foi: %.2f\n", tempo );

return 0;


}
