#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Fa�a um programa que receba e armazene 20 n�meros em
um vetor. Em seguida exiba:
Quantos n�meros s�o iguais a 30;
Quantos n�meros s�o maior que a m�dia;
Quantos n�meros s�o iguais � media;*/

int main () {
  setlocale(LC_ALL, "");

int vetoresa[20], media=0, e=0,f=0,g=0; // varaiveis

  for(int i = 0; i < 20; i++){ // laco de looping para rodar 20x
    printf("Por favor, digite um valor:\n"); //pedindo para entrar com dados
    scanf("%i",&vetoresa[i]); // armazenando dados
    media += (vetoresa[i]); // somando todos valores digitados
  }//for externo
   media = media /20; // eque��o de m�dia
  for (int i = 0; i < 20; i++) { // laco de looping para rodar 20x

    if(vetoresa[i]  == 30){ // condi��o se for igual 30
      e++; // incrementar + 1
    } else if(vetoresa[i] > media){ // condi��o se dados for maior que valor media
      f++; // incrementar + 1
    } else if (vetoresa[i]  == media)  // condi��o se dados for igual que valor media
      g++; // incrementar + 1
  }

printf("%i s�o iguais a 30\n",e); // exibir condi��o se for igual 30
printf("%i s�o maior que a m�dia\n",f); // exibir condi��o se dados for maior que valor media
printf("%i s�o iguais a m�dia\n",g); //exibir condi��o se dados for igual que valor media
  return 0;
}//main
