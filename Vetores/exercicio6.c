#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Faça um programa que receba e armazene 20 números em
um vetor. Em seguida exiba:
Quantos números são iguais a 30;
Quantos números são maior que a média;
Quantos números são iguais à media;*/

int main () {
  setlocale(LC_ALL, "");

int vetoresa[20], media=0, e=0,f=0,g=0; // varaiveis

  for(int i = 0; i < 20; i++){ // laco de looping para rodar 20x
    printf("Por favor, digite um valor:\n"); //pedindo para entrar com dados
    scanf("%i",&vetoresa[i]); // armazenando dados
    media += (vetoresa[i]); // somando todos valores digitados
  }//for externo
   media = media /20; // equeção de média
  for (int i = 0; i < 20; i++) { // laco de looping para rodar 20x

    if(vetoresa[i]  == 30){ // condição se for igual 30
      e++; // incrementar + 1
    } else if(vetoresa[i] > media){ // condição se dados for maior que valor media
      f++; // incrementar + 1
    } else if (vetoresa[i]  == media)  // condição se dados for igual que valor media
      g++; // incrementar + 1
  }

printf("%i são iguais a 30\n",e); // exibir condição se for igual 30
printf("%i são maior que a média\n",f); // exibir condição se dados for maior que valor media
printf("%i são iguais a média\n",g); //exibir condição se dados for igual que valor media
  return 0;
}//main
