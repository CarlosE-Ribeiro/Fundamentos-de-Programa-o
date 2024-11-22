//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*Fa�a um programa que gere 100 n�meros aleat�rios. Esse programa dever�, em seguida,armazenar esses n�meros em um arquivo bin�rio.*/

int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int i, random[100];
  int lido[100];
  FILE *arq = fopen("arquivo.bin", "w+b");
  //salva os valores no vetor
  for (i = 0; i < 100; i++){
    //gera um valor aleat�rio entre 0 e 99 e salva no vetor
    random[i] = (rand() % 100);
  }//for
  //escreve os dados gerados no arquivo
  fwrite(random, sizeof(int), 100, arq);
  //volta para o come�o do arquivo
  fseek(arq, 0, SEEK_SET);
  //l� do arquivo no HD e exibe na tela
  fread(lido, sizeof(int), 100, arq);
  for (i = 0; i < 100; i++){
    //->valor gerado para ser salvo no .bin | ->valor convertido para exibir na tela
    printf("%2i | %2i\n", random[i], lido[i]);
  }//for
  //fecha o arquivo
  fclose(arq);

  return 0;
}//main
