//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Faça um programa que multiplique as matrizes A e D abaixo gerando matriz AD*/
int main () { // main
  setlocale(LC_ALL, "");//poder usar pontuações

int matriza[2][3], matrizb[3][2], matrizc[2][2]; // variaveis matrizes
int i,j,m,c; // variaveis linhas e colunas

for(i=0; i < 2; i++){ // loop linha
  for(j=0; j < 3; j++){//loop coluna
    printf("Digite um valor para matriz A:\n"); // pedindo pro usuario entar com valor matriz A
    scanf("%i",&matriza[i][j]);// armazenando valor matriz B
  }//for interno
}//for externo
for(i=0; i < 3; i++){// loop linha
  for(j=0; j < 2; j++){//loop coluna
    printf("Digite um valor para matriz B:\n");// pedindo pro usuario entar com valor matriz B
    scanf("%i",&matrizb[i][j]);// armazenando valor matriz B
  }//for interno
}//for externo
for(i=0; i <2; i++){// loop linha
  for(j=0; j <2; j++){//loop coluna
    for(m=0; m < 3; m++){ // loop para pegar todas linhas e colunas
    c += matriza[i][m] * matrizb[m][j]; // multiplicação e soma  para obter matriz c
   }// foi interno 2x
   matrizc[i][j] = c; // c é igual matriz C
   c = 0; // zerar para não utilizar valor final 2 vezes
  }//for interno
}//for externo
printf("\nMatriz A:\n"); // mostar que a matriz A está logo abaixo
for(i=0; i <2; i++){// loop linha
  printf("\n");//pular linha
  for(j=0; j <3; j++){// loop coluna
    printf("%4i", matriza[i][j]); // exibir matriz A
  }//for interno
}//for externo
printf("\nMatriz B:\n");// mostar que a matriz B está logo abaixo
for(i=0; i <3; i++){// loop linha
  printf("\n");//pular linha
  for(j=0; j <2; j++){// loop coluna
    printf("%4i", matrizb[i][j]);// exibir matriz B
  }//for interno
}//for externo
printf("\nMatriz C:\n");// mostar que a matriz C está logo abaixo
for(i=0; i <2; i++){// loop linha
  printf("\n");//pular linha
  for(j=0; j <2; j++){// loop coluna
    printf("%4i", matrizc[i][j]);// exibir matriz C
  }//for interno
}//for externo
  printf("\n");//pular linha
return 0;
}//main
