//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Faça um programa que some as matrizes A e B,gerando C*/
int main () { // main
  setlocale(LC_ALL, "");//poder usar pontuações

int matriza[2][3], matrizb[2][3], matrizc[2][3]; // variaveis matrizes
int i,j; // variaveis linhas colunas
for(i=0; i < 2; i++){ // loop linha
  for(j=0; j < 3; j++){ // loop coluna
    printf("Digite um valor para matriz A:\n");// pedindo pro usuario entar com valor matriz A
    scanf("%i",&matriza[i][j]); // armazenando valor matriz A
  }//for interno
}//for externo
for(i=0; i < 2; i++){ //loop linha
  for(j=0; j < 3; j++){// loop coluna
    printf("Digite um valor para matriz B:\n");// pedindo pro usuario entar com valor matriz B
    scanf("%i",&matrizb[i][j]);// armazenando valor matriz B
  }//for interno
}//for externo
for(i=0; i < 2; i++){//loop linha
  for(j=0; j < 3; j++){// loop coluna
   matrizc[i][j] = matriza[i][j] + matrizb[i][j]; // soma matriz A e matriz B para ter a matriz C
  }//for interno
}//for externo
printf("Matriz C:"); // mostar que a matriz C está logo abaixo
for(i=0; i < 2; i++){//loop linha
  printf("\n"); //pular linha
  for(j=0; j < 3; j++){// loop coluna
    printf("%4i", matrizc[i][j]); // printar matriz C
  }//for interno
}//for externo
printf("\n");//pular linha
return 0;
}//main
