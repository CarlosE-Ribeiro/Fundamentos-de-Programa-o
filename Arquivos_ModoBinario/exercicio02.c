//declara��o de vari�veis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
/*Elabore um programa que leia um arquivo bin�rio contendo 100 n�meros. Mostre na tela a soma desses n�meros.*/
int main(){
  setlocale(LC_ALL, "portuguese");
//declara��o das vari�veis
  int i, random[100], soma = 0;
  int lido[100];
  FILE *arq = fopen("arquivo.bin", "rb");
//looping para rodar todos as varia�vies que comp�e o arquivo e somar
  for (i = 0; i < 100; i++){
    //l� o arquivo que gerou 100 numeros aleatorios
    fread(random, sizeof(int), 100, arq);
    //faz a soma de todos os numeros
    soma = soma + random[i];
  }//for
  //exibindo a soma do qrquivo
  printf("%i\n", soma);
  fclose(arq);

  return 0;
}//main
