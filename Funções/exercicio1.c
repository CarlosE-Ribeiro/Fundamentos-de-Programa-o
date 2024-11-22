//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//funcção para saber qual o maior valor digitado pelo usuário
float mvalor ( float n1, float  n2, float n3, float guarda_maior) {
//condição para armazenar o maior valor
if(n1>guarda_maior){
guarda_maior=n1;
}if(n2>guarda_maior){
guarda_maior=n2;
}if(n3>guarda_maior) {
guarda_maior=n3;
}//if
return guarda_maior;
}//mvalor

int main( int argc, char **argv){//main
    //para poder utilizar pontuações
    setlocale(LC_ALL, "portuguese");
//declaraçãode variaveis
float n1, n2, n3;
float guarda_maior =0, resultado;
//entrando com três valores na main
if(argc == 4){
n1 = atof(argv[1]);
n2 = atof(argv[2]);
n3 = atof(argv[3]);
//igualando a condição da função igual a resultado
resultado = mvalor(n1, n2, n3, guarda_maior);
}else {
  //se ele digitar mais ou menos valores, printar este "eero"
  printf("Por favor insererir exatamente 3 valores\n");
}
//printando o resultado
printf("O maior valor digitado foi %.2f\n\n", resultado);
  return 0;
}//main
