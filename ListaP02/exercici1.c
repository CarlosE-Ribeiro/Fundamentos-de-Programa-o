//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//funçã main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
float polegada;
//criando laço de repetição para mostrar as 20 primeiras conversões de polegadas para cm
for(int i = 1; i < 21; i ++){
  polegada = i * 2.54;
  printf(" %i polegada(s) equivale a %.2f centímetro(s)\n", i, polegada);
}//for


  return 0;
}//main
