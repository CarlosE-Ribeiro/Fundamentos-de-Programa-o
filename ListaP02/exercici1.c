//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//fun�� main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
float polegada;
//criando la�o de repeti��o para mostrar as 20 primeiras convers�es de polegadas para cm
for(int i = 1; i < 21; i ++){
  polegada = i * 2.54;
  printf(" %i polegada(s) equivale a %.2f cent�metro(s)\n", i, polegada);
}//for


  return 0;
}//main
