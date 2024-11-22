//declaração de variáveis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
/*Elabore um programa que leia um arquivo binário contendo 100 números. Mostre na tela a soma desses números.*/
int main(){
  setlocale(LC_ALL, "portuguese");
//declaração das variáveis
  int i, random[100], soma = 0;
  int lido[100];
  FILE *arq = fopen("arquivo.bin", "rb");
//looping para rodar todos as variaévies que compõe o arquivo e somar
  for (i = 0; i < 100; i++){
    //lê o arquivo que gerou 100 numeros aleatorios
    fread(random, sizeof(int), 100, arq);
    //faz a soma de todos os numeros
    soma = soma + random[i];
  }//for
  //exibindo a soma do qrquivo
  printf("%i\n", soma);
  fclose(arq);

  return 0;
}//main
