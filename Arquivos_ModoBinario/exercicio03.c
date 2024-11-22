#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora,
escreva um programa que leia os dados de cinco atletas e os armazene em um arquivo binário.*/

  typedef struct{
    char nome[20];
    char esporte[30];
    int idade;
    float altura;
  }Atleta;


int main(){
  //para poder utilizar pontuações
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  Atleta atleta[5];
  int i;
  //crinado e abrindo arquivo
  FILE *arquivo = fopen("atletas.bin", "wb");
  //looping para preencher
  for(i = 0; i < 5; i++){
    //preenchendo o nome do atleta
    printf("Digite o nome do %i° atleta: ", i+1);
    fgets(atleta[i].nome, 20, stdin);
    atleta[i].nome[strcspn(atleta[i].nome, "\n")] = '\0';
    fflush(stdin);
    //preenchendo o espoprte do atleta
    printf("Digite o esporte que o %i° atleta pratica: ", i+1);
    fgets(atleta[i].esporte, 30, stdin);
    atleta[i].esporte[strcspn(atleta[i].esporte, "\n")] = '\0';
    fflush(stdin);
    //preenchendo a idade do atleta
    printf("Digite a idade do %iº atleta: ", i+1);
    scanf("%i", &atleta[i].idade);
    fflush(stdin);
    //preenchendo a altura do atleta
    printf("Digite a altura do %iº atleta: ", i+1);
    scanf("%f", &atleta[i].altura);
    fflush(stdin);
    printf("\n");
  }//for
    //armazenando a estrutura e preenchendo ela no novo arquivo binário
    fwrite(atleta, sizeof(Atleta), 5, arquivo);

  printf("\n");
  
  fclose(arquivo);

  return 0;
}//main
