//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float notafinal (float n1, float n2, float n3, float media, char escolha){
  switch (escolha){
    case 'A':
    case 'a':
         media = (n1 + n2 + n3) / 3;
         printf("A media � %.2f\n", media);
      break;
    case 'P':
    case 'p':
         media = ((n1 * 5) + (n2 * 3) + (n3 * 2));
         printf("A media ponderada � %.2f\n", media);
      break;
    case 'S':
    case 's':
        media = n1 + n2 + n3;
        printf("A soma � %.2f\n", media);
      break;
  }//stwich
  return media;
}//notafinal

// fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "portuguese");
//declarando variaveis
char escolha;
float media, n1, n2, n3, resultado;
//condi��o para saber se o usuario est� entrando com a quantidade de dados permitido
if(argc == 5){
//se sim, ordem em que ser� entrada de valor na main
  escolha = argv[1][0];
  n1 = atof(argv[2]);
  n2 = atof(argv[3]);
  n3 = atof(argv[4]);
  resultado = notafinal (n1, n2, n3, media, escolha);
} else {
  //se n�o, exibir erro por excesso ou falta de dados
  printf("Por favor selecionar s� modo com a inicial e colocar as tr�s. Exemplo: s 2,45 10 9,5 \n");
}//else

return 0;
}//main
