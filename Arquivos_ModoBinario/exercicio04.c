//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Considerando a estrutura atleta do exercício anterior,
escreva um programa que leia um arquivo binário contendo os dados de
cinco atletas. Calcule e exiba o nome do atleta mais alto e do mais velho.*/

typedef struct{
  char nome[20];
  char esporte[30];
  int idade;
  float altura;
}Atletas;

//função main
int main(){
  //para poder utilizar pontuações
  setlocale(LC_ALL, "");
  //declaração de variáveis
  Atletas atleta[5];
  float comp_altura = 0;
  int comp_idade = 0;
  int posicao_altura = 0;
  int posicao_idade = 0;

  //declarando o arquivo e abrindo ele para leitura
  FILE *arquivo = fopen("atletas.bin","rb");
  //verificando se o arquivo está no diretório
  if(arquivo == NULL){
    perror("Erro ao abrir arquivo! ");
    printf("\n");
    exit(1);
  }//if
  //lendo o arquivo
  fread(atleta, sizeof(Atletas), 5, arquivo);
  // Compara maior altura
  for (int i = 0; i < 5; i++){
    if (comp_altura <= atleta[i].altura){
      comp_altura = atleta[i].altura;
      posicao_altura = i;
     }//if
   }//for
  //comparando a idade
  for (int j = 0; j < 5; j++){
    if (atleta[j].idade > comp_idade){
      comp_idade = atleta[j].idade;
      posicao_idade = j;
    }//if
  }//for
  //printando a nome do atleta mais velho e amis alto
  printf("O atleta com maior altura é %s!\n",atleta[posicao_altura].nome);
  printf("O atleta mais velho é %s!\n", atleta[posicao_idade].nome);

  fclose(arquivo);

  return 0;
}//main
