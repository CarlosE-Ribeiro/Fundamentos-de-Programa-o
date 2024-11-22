//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Crie uma estrutura representando um ranking. Essa estrutura deve conter o nome
do jogador e sua pontuação. Em seguida, escreva um programa que leia os dados de
5 jogadores e os armazene em um arquivo utilizando a técnica de Dados formatados.*/

typedef struct{
  char nome[21];
  int pontos;
}Ranking;

//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
Ranking ranking[5];
FILE *arquivo = fopen("ranking.txt", "w+");
//looping preencher os dados que compõe a estrutura
for(int i = 0; i < 5; i++){
  printf("Digite o nome do %iº jogador:\n", i+1);
  fgets(ranking[i].nome, 21, stdin);
  ranking[i].nome[strcspn(ranking[i].nome, "\n")] = '\0';
  fflush(stdin);
  printf("Digite a pontuação do %iº jogador:\n", i+1);
  scanf("%i", &ranking[i].pontos);
  fflush(stdin);
}//for
//laço de repetição para passar os dados pro arquivo
for(int i = 0; i < 5; i++){
  fprintf(arquivo, "Nome: %s\n", ranking[i].nome);
  fprintf(arquivo, "Pontuação: %i\n", ranking[i].pontos);
}//for que envia os valores para o arquivo

fclose(arquivo);

return 0;
}//main
