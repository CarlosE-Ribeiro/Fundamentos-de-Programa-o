//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*Escreva um programa que leia do usuário o nome de um arquivo
texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.*/

//função main
int main(){
  //para poder utilizar acentos
  setlocale(LC_ALL, "");
//declaração de variáveis
  char arquivo[20];
  int cont_linha = 0;
  char conta = 0;
  //pede para o usuário escrever o nome do arquivo
  printf("Digite o nome de um arquivo de texto: ");
  fgets(arquivo, 20, stdin);
  //Subscreve o \n por \0
  arquivo[strcspn(arquivo,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //abrindo arquivo
  FILE *arq = fopen(arquivo, "r");
  //verificar se o arquivo está no diretorio correto
  if(arq == NULL){
    perror("Erro ao abrir arquivo! ");
    printf("\n");
    exit(1);
  }//if
  //looping para percorrer o que esta digitado no arquivo e contar qunatidade de enter(\n)
  while((conta = fgetc(arq))!=EOF){
    if(conta == '\n'){
      cont_linha++;
    }//if
  }//while
  //printando a qunatidade de linha
    printf("O número de linhas é: %i\n", cont_linha);
    //fechando arquivo
    fclose(arq);

return 0;
}//main
