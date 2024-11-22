//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Crie um programa para calcular e exibir o n�mero de palavras
contido em um arquivo texto. O usu�rio dever� informar o nome do
arquivo. */

//fun��o main
int main(){
  //para poder utilizar acentos
  setlocale(LC_ALL, "");

//declara��o de vari�veis
  char arquivo[20];
  int cont_palavras = 1;
  char conta = 0;

  //pede para o usu�rio escrever o nome do arquivo
  printf("Digite o nome de um arquivo de texto: ");
  fgets(arquivo, 20, stdin);
  //Subscreve o \n por \0
  arquivo[strcspn(arquivo,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //abrindo arquivo
  FILE *arq = fopen(arquivo, "r");
  //verificar se o arquivo est� no diretorio correto
  if(arq == NULL){
    perror("Erro ao abrir arquivo! ");
    printf("\n");
    exit(1);
  }//if
  //looping para percorrer o que esta digitado no arquivo e contar qunatidade de enter(\n)
  while((conta = fgetc(arq))!=EOF){
    //cont_linha++;
    if(conta  == ' ' || conta == '\n'){
      cont_palavras++;
    }
  }//while
  //printando a qunatidade de linha
    printf("O n�mero de linhas �: %i\n", cont_palavras);
    //fechando arquivo
    fclose(arq);

return 0;
}//main
