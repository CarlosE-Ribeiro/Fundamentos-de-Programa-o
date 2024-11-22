//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações

int tabuada; //variaveis para tabuada

  for(int rep = 1; rep <= 10; rep ++) { // laço repetição para rodar 10x tabuada
    printf("-------------- tababuada do %i -------------- \n", rep); // separar a tabuada e deixar mais organizada
      for(int rep2 = 1; rep2 <= 10; rep2 ++) { // laço repetição para rodar 10x o multiplicador

      tabuada = rep * rep2; // equação para exibir a tabuada

    printf(" %i x %i = %i\n",rep, rep2, tabuada ); // exibir a tabuada
  } //for externo
}//for interno
      return 0;
}//main
