#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Fa�a um programa que leia e armazene dois vetores detamanho 5. Ao final o programa deve calcular e exibir o vetor soma; */

int main () {
  setlocale(LC_ALL, "");

int vetor1 [4], vetor2[2]; //variaveis vetores
int soma = 0, soma2 = 0; //variaveis para soma

for(int i = 0; i < 5; i ++) { //la�o de repeti��o para rodar 5 vezez a
  printf("Digite o %i� valor:\n", i+1);//pedindo pro usu�rio entrar com dados a
  scanf("%i",&vetor1[i] );//armazenar dado a
  soma += vetor1[i]; // opera��o para obter soma a
} // priemiro for
  for(int c = 0; c < 5; c ++) {//la�o de repeti��o para rodar 5 vezez b
  printf("Digite o %i� valor:\n", c+1);//pedindo pro usu�rio entrar com dados b
    scanf("%i",&vetor2[c]);//armazenar dado b
    soma2 += vetor2[c]; //opera��o para obter soma b
} //segundo for
printf("valores %i\n",soma);
printf("valores %i\n",soma2);

return 0;
}//main
