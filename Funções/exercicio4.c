//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//função para saber a media final do aluno em letra
void notaf (float nota){
//condição para exibir as letras de acordo com a media do aluno
if(9 <= nota && nota < 10){
  printf("A\n");
} if(7 <= nota && nota < 9){
  printf("B\n");
}if(5 <= nota && nota < 7){
  printf("C\n");
}if(0 <= nota && nota < 5){
  printf("D\n");
}//ultimo if
return;
}//notaf

// função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "portuguese");
//declarando variaveis
float nota;
//ordem em que será entrada de valor na main
nota = atof(argv[1]);
notaf (nota);

return 0;
}//main
