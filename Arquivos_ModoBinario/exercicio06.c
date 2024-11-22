//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Considerando a estrutura ranking do exerc�cio anterior, escreva um programa que
leia o arquivo gerado contendo os dados dos 5 jogadores.*/

typedef struct{
  char nome[21];
  int pontos;
}Ranking;

//fun��o main
int main(){
  //para poder utilizar pontua��es
  setlocale(LC_ALL, "");
  //declara��o de vari�veis
  Ranking ranking[5];
  char str[20];
  //criando e abrindo arquico
  FILE *arq = fopen("ranking.txt", "r");
  //verificando se o arquivo est� no diret�rio
  if (arq == NULL){
    perror("Erro: ");
    exit(1);
  }//if
  //lendo todos os dados do arquivo
  for(int i = 0; i < 5; i++){
    fscanf(arq, "%s %s", str, &ranking[i].nome);
    fscanf(arq, "%s %i", str, &ranking[i].pontos);
  }//for
  //exibindo os dados contidos nos arquivos
  for(int i = 0; i < 5; i++){
    printf("Nome: %s\n", ranking[i].nome);
    printf("Pontos: %i\n\n", ranking[i].pontos);
  }//for

  fclose(arq);
  return 0;
}//main
