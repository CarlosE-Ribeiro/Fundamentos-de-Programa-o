//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Construa um programa que leia uma matriz de tamanho 5 x 5 e escreva:
# O valor e a localiza��o (linha, coluna) do maior valor encontrado na matriz.*/
int main () { // main
  setlocale(LC_ALL, "");//poder usar pontua��es

int matriz[5][5], mv = 0, posi1, posi2;// variaveis
for(int i = 0; i < 5; i++){// loop linha
  for(int j = 0; j < 5; j++){ // loop coluna
    printf("Digite um valor:\n");// pedir pro usuario entar com um valor
    scanf("%i",&matriz[i][j]); // armazenar valor digitado pelo usuario
    if(matriz[i][j] > mv){ // consi��o maior valor
       mv = matriz[i][j]; // guardando maior valor
       posi1 = i +1; // descobrindo possic��o da linha
       posi2 = j +1;// descobrindo posi��o da coluna
    }//if
  }//for interno
}//for externo
for(int i = 0; i < 5; i++){// loop linha
    printf("\n"); // pular linha
for(int j = 0; j < 5; j++){// loop coluna
    printf("%3i", matriz[i][j]);// exibir matriz
  } //for interno
}//for externo
printf("\n");// pua
printf("O maior valor � %i\n",mv); // mostar maior digitado
printf("Est� localizada na linha %i e coluna %i\n", posi1, posi2); // mostrar posi��o do maior valor
return 0;
}//main
