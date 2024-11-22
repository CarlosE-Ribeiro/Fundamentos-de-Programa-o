//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

/*Elabore um programa para calcular e exibir o número de vezes que cada letra ocorre dentro de um arquivo texto.
Ignore as letras com acento. O usuário deverá informar o nome do arquivo.*/

//função main
int main(){
  //para poder utilizar pontuações
  setlocale(LC_ALL, "");
  //abrindo arquivo
  FILE *arq;
  //declaração de variáveis
  char letras[400], arquivo[20];
  int conta_letra = 0, j, contador2 = 1;
  char recebe_letra_minuscula;
  //pede para o usuário escrever o nome do arquivo
  printf("Digite o nome de um arquivo de texto: ");
  fgets(arquivo, 20, stdin);
  //Subscreve o \n por \0
  arquivo[strcspn(arquivo,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  arq = fopen(arquivo, "r");

  while(fgets(letras, 400, arq)){
    printf("A %iª linha contém: \n", contador2);
    for(recebe_letra_minuscula = 'A'; recebe_letra_minuscula <= 'Z'; recebe_letra_minuscula++){
      for(j = 0; letras[j] != '\0'; j++){
        if(letras[j] == recebe_letra_minuscula || letras[j] == tolower(recebe_letra_minuscula)){
          conta_letra++;
        }//if
      }//for interno
      if(conta_letra != 0){// Este if serve para o programa imprimir apenas as letras que o arquivo contem
        printf("A letra %c apareceu %d vezes\n", recebe_letra_minuscula, conta_letra);
      }//if
     conta_letra = 0;
    }//for externo
    printf("\n");
    contador2++;
  }//while
  printf("\n");

  fclose(arq)
  return 0;
}//main
