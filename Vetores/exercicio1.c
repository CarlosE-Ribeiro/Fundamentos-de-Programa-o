#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Faça um programa que leia e armazene dois vetores detamanho 5. Ao final o programa deve calcular e exibir o vetor soma; */

int main () {
  setlocale(LC_ALL, "");

int vetor1 [4], vetor2[2]; //variaveis vetores
int soma = 0, soma2 = 0; //variaveis para soma

for(int i = 0; i < 5; i ++) { //laço de repetição para rodar 5 vezez a
  printf("Digite o %i° valor:\n", i+1);//pedindo pro usuário entrar com dados a
  scanf("%i",&vetor1[i] );//armazenar dado a
  soma += vetor1[i]; // operação para obter soma a
} // priemiro for
  for(int c = 0; c < 5; c ++) {//laço de repetição para rodar 5 vezez b
  printf("Digite o %i° valor:\n", c+1);//pedindo pro usuário entrar com dados b
    scanf("%i",&vetor2[c]);//armazenar dado b
    soma2 += vetor2[c]; //operação para obter soma b
} //segundo for
printf("valores %i\n",soma);
printf("valores %i\n",soma2);

return 0;
}//main
