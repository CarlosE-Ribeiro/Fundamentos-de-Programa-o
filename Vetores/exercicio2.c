#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A */

int main () {
  setlocale(LC_ALL, ""); //para poder usar pontuações
int vetora[10], vetorb[10], i; //variaveis

for(i = 0;i < 10; i++){ //laço de rapetição para looping de 10x
  printf("Digite o %i° valor\n", i+1); //pedindo pro usuário entrar com valor
  scanf("%i",&vetora[i]);// armazenameto do valor
    vetorb[i] = pow(vetora[i],2); // equação para elevar o numero ao quadrado
  }//for
    for(i = 0; i < 10; i++){ //laço de rapetição para looping de 10x
      printf("%i° espaço do vetor a:%i\n",i+1, vetora[i]); //mostrando o vetor a
      printf("%i° espaço do vetor b:%i\n",i+1,vetorb[i]);//mostrando o vetor b
    }
return 0;
}//main
