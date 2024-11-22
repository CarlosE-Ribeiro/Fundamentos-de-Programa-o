//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float notafinal (float n1, float n2, float n3, float media, char escolha){
  switch (escolha){
    case 'A':
    case 'a':
         media = (n1 + n2 + n3) / 3;
         printf("A media é %.2f\n", media);
      break;
    case 'P':
    case 'p':
         media = ((n1 * 5) + (n2 * 3) + (n3 * 2));
         printf("A media ponderada é %.2f\n", media);
      break;
    case 'S':
    case 's':
        media = n1 + n2 + n3;
        printf("A soma é %.2f\n", media);
      break;
  }//stwich
  return media;
}//notafinal

// função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "portuguese");
//declarando variaveis
char escolha;
float media, n1, n2, n3, resultado;
//condição para saber se o usuario está entrando com a quantidade de dados permitido
if(argc == 5){
//se sim, ordem em que será entrada de valor na main
  escolha = argv[1][0];
  n1 = atof(argv[2]);
  n2 = atof(argv[3]);
  n3 = atof(argv[4]);
  resultado = notafinal (n1, n2, n3, media, escolha);
} else {
  //se não, exibir erro por excesso ou falta de dados
  printf("Por favor selecionar só modo com a inicial e colocar as três. Exemplo: s 2,45 10 9,5 \n");
}//else

return 0;
}//main
