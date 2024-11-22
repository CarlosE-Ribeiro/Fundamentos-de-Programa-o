//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

/*Escreva um programa para converter o conteúdo de um arquivo
texto em caracteres maiúsculos. O programa deverá ler do usuário o
nome do arquivo a ser convertido e o nome do arquivo a ser salvo.*/

//função main
int main(){
  //para poder utilizar pontuações
  setlocale(LC_ALL, "");
  //declaração de variáveis
  char arquivo_converter[20];
  char arquivo_salvar[20];
  int contador;
  //solicita o nome do primeiro arquivo
  printf("Digite o nome arquivo de texto que quer alterar: ");
  fgets(arquivo_converter, 20, stdin);
  //Subscreve o \n por \0
  arquivo_converter[strcspn(arquivo_converter,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //solicita o nome do primeiro arquivo
  printf("Digite o nome arquivo convertido: ");
  fgets(arquivo_salvar, 20, stdin);
  //Subscreve o \n por \0
  arquivo_salvar[strcspn(arquivo_salvar,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //abrindo arquivos
  FILE *converter = fopen(arquivo_converter, "r");
  FILE *salvar = fopen(arquivo_salvar, "w");
//verificando se tem o arquivo no diretório
  if(converter == NULL){
    perror("Erro ao abrir arquivo 1!");
    printf("\n");
    exit(1);
  }//if
  if(salvar == NULL){
    perror("Erro ao abrir arquivo 1!");
    printf("\n");
    exit(1);
  }//if
  while((contador = fgetc(converter)) != EOF){
      fputc(toupper(contador), salvar);
  }//while
  fclose(converter);
  fclose(salvar);

  return 0;
}//main
