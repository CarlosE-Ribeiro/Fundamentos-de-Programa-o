#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Dado dois vetores, A (4 elementos) e B (5 elementos), fa�a
um programa em C que imprima todos os elementos comuns
aos dois vetores*/

int main () {
  setlocale(LC_ALL, ""); /// poder utilizar pontua��es

int valoresa[4], valoresb[5], comuns;//variaveis

for(int i = 0; i < 4; i ++){// la�o de lopping para rodar 4x
  printf("Digite o %i� valor do vetor A:\n", i+1);//pedindo para entrar com dados a
  scanf("%i",&valoresa[i]);//armazenando daos a
}//primeiro for
  for(int c = 0; c < 5; c++){//la�o de lopping para rodar 4x
  printf("Digite o %i� valor do vetor B:\n", c+1);//pedindo para entrar com dados b
  scanf("%i",&valoresb[c]);//armazenando daos b
}//segundo for
for(int i = 0; i < 4; i++) { //la�o de lopping para rodar 4x
  for(int c = 0; c < 5; c++){//la�o de lopping para rodar 4x
   if (valoresa[i] == valoresb [c]){ // condi��o de compara��o entre a e b
    printf(" %i � um n�mero comum entre os vetores A e B\n", valoresa[c]); //exibindo valor que s�o iguais entre a e b
  }//if
}//for interno
}//for externo
return 0;
}//main
