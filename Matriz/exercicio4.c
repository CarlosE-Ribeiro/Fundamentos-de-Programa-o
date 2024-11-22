//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Faça um programa que multiplique por 5 a matriz A (preenchida a partir do teclado) para gerar a matriz C.*/
int main () { // main
  setlocale(LC_ALL, "");//poder usar pontuações

int matriza[3][3], matrizc[3][3]; // variaveis

for(int i = 0; i <3; i++){ // loop linha
  for(int j = 0; j <3; j++){ //loop coluna
   printf("Digite os valores para formar a matriz A:\n"); // pedindo usuario entar com valor
   scanf("%i",&matriza[i][j]);// armazenando o valor
   matrizc[i][j] = matriza[i][j] * 5; // multiplicando o valor por 5 e salvando em matriz c
  }//for interno
}//for externo
for(int i = 0; i <3; i++){ // loop linha
  printf("\n"); //pula minha
  for(int j = 0; j <3; j++){// lopp coluna
    printf("%5i", matrizc[i][j]); // preenchr coluna com o valor da multiplicação
  }//for interno
}//for externo
  printf("\n");//  pular linha
return 0;
}//main
