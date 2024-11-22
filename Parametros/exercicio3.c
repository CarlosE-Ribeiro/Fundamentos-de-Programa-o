//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//estrutura de cada banda
typedef struct{
  char nome[20];
  char tipo[20];
  int integrantes;
  int posicao;
} banda_musicas;

//fun��o para preencher dados das 5 bandas
  void preenchimento ( banda_musicas *bmusica){
for( int i =0; i < 5; i++){
  printf("Digite o nome da banda:\n");
  fgets(bmusica[i].nome, 15, stdin);
  bmusica[i].nome[strcspn(bmusica[i].nome, "\n")] = '\0'; // troca \n por \0
  fflush(stdin);
  printf("Digite o tipo da banda:\n");
  fgets(bmusica[i].tipo, 15, stdin);
  bmusica[i].tipo[strcspn(bmusica[i].tipo, "\n")] = '\0'; // troca \n por \0
  fflush(stdin);
  printf("Digite a quantidade de integrantes banda:\n");
  scanf("%i",&bmusica[i].integrantes);
  printf("Digite a posi��o em que ele se encontra no rank:\n");
  scanf("%i",&bmusica[i].posicao);
  printf("\n\n-----------------------------------------------------\n\n");
  fflush(stdin);
    }//for
}//preenchimento

//fun��o que pede pro usuario de e mostra a banda de acordo com o rank
  void rank(banda_musicas *bmusica){
int number;
printf("Digite um n�mero de 1 a 5:\n");
scanf("%i",&number);
fflush(stdin);
switch (number) {
  case 0:
      printf("Banda %s pertence ao %d lugar no ranking\n", bmusica[0].nome, bmusica[0].posicao +1);
      printf("G�nero: %s \n", bmusica[0].tipo);
      printf("Cont�m %i integrantes\n", bmusica[0].integrantes);
    break;
  case 1:
      printf("Banda %s pertence ao %d lugar no ranking\n", bmusica[1].nome, bmusica[1].posicao +1);
      printf("G�nero: %s \n", bmusica[1].tipo);
      printf("Cont�m %i integrantes\n", bmusica[1].integrantes);
    break;
  case 2:
      printf("Banda %s pertence ao %d lugar no ranking\n", bmusica[2].nome, bmusica[2].posicao +1);
      printf("G�nero: %s \n", bmusica[2].tipo);
      printf("Cont�m %i integrantes\n", bmusica[2].integrantes);
    break;
  case 3:
      printf("Banda %s pertence ao %d lugar no ranking\n", bmusica[3].nome, bmusica[3].posicao +1);
      printf("G�nero: %s \n", bmusica[3].tipo);
      printf("Cont�m %i integrantes\n", bmusica[3].integrantes);
    break;
  case 4:
      printf("Banda %s pertence ao %d lugar no ranking\n", bmusica[4].nome, bmusica[4].posicao +1);
      printf("G�nero: %s \n", bmusica[4].tipo);
      printf("Cont�m %i integrantes\n", bmusica[4].integrantes);
    break;
  default:
      printf("N�o tem esse nenhuma banda nesse ranking, digite um valor v�lido...\n");
    }//switch
}//rank

//fun��o que pede para o usu�rio entrar com g�nero de m�sica e exibe os correspondentes
void compara(banda_musicas *bmusica){

  char genero[15];
  printf("Digite um g�nero de m�sica tocado por bandas\n");
  fgets(genero, 15, stdin);
  genero[strcspn(genero, "\n")] = '\0'; // troca \n por \0
  fflush(stdin);

  for(int i =0; i < 5; i++){
    if (strcmp(bmusica[i].tipo, genero) == 0){
      printf("A banda %s � do g�nero descrido\n",bmusica[i].nome);
      fflush(stdin);
   }//if
  }//for
}//compara

//fun��o pede pro usuario o nome de uma banda e retorna uma saida dizendo se a banda pertence ou n�o no ranking
void compbanda(banda_musicas *bmusica){

  char compbanda[15];
  int c=0;
  printf("Digite uma banda de m�sica\n");
  fgets(compbanda, 15, stdin);
  compbanda[strcspn(compbanda, "\n")] = '\0'; // troca \n por \0
  fflush(stdin);

  for(int i =0; i < 5; i++){
    if (strcmp(bmusica[i].nome, compbanda) == 0){
      printf("A banda %s est� no ranking\n",compbanda);
      c++;
    }//if
  }//for
  if(c == 0 ){
    printf("A banda %s n�o esta no ranking\n", compbanda);
  }//if
}//compara

//fun��o para criar um menu para preencher a estrutura e as outras fun��es
void menu(banda_musicas *bmusica) {

  int escolha;
  printf(" 1 - bandas favoritas\n");
  printf(" 2 - sair\n");
  scanf("%i",&escolha);
  fflush(stdin);

  switch (escolha) {

    case 1:
        preenchimento(bmusica);
        fflush(stdin);
        rank(bmusica);
        fflush(stdin);
        compara(bmusica);
        fflush(stdin);
        compbanda(bmusica);
        fflush(stdin);
      break;
    case 2:
      default:
      ;
  }//switch
}//menu

//fun�� main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�reis
banda_musicas bmusica[5];

preenchimento(bmusica);
rank(bmusica);
compara(bmusica);
compbanda(bmusica);
menu(bmusica);
  return 0;
}//main
