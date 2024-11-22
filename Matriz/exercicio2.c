//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária;
*/
int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações

int matriz[3][3], soma1 =0, soma2 =0;

for(int l = 0; l < 3; l++){ // loop para linha
  for(int c = 0; c < 3; c++){ // loop para coluna
    printf("Digite o valor\n"); // pedir valor para o usuario
    scanf("%i",&matriz[l][c]);// armazenar valor
    if(l == c){ // condição se a posição é igual
       soma1 += matriz[l][c]; // somar
    }if (c == 2 - l){ // se a diferenca for de 2
      soma2 += matriz[l][c]; // somar
    }//sgundo if
  }//for interno
}//for externo
for (int l = 0; l < 3; l++){ // loop linha
  printf("\n"); ///pular de linha
for(int c = 0; c < 3; c++){ // lopp coluna
  printf("%3i ", matriz[l][c]); // preencher coluna
  }//for interno
}// for externo
printf("\n"); // pular linha
printf("Soma da diagonal principal é %i \n", soma1); // mostrar soma da diagonal principal
printf("Soma da diagonal secundária é %i \n", soma2); //mostrar soma da diagonal secundaria
  printf("\n");
return 0;
}//main
