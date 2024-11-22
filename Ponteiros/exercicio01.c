//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int valor1 = 10, valor2 = 10;
int *ponteiro1, *ponteiro2;
//igualando os ponteiros com os endereços das variáveis
ponteiro1 = &valor1;
ponteiro2 = &valor2;
//condições para diferenciar se os ponteiros tem o mesmo valor
  if (ponteiro1 > ponteiro2){
    //se o ponteiro 1 tiver o enderço maior, exibir o conteúdo que ele contém e o endereço
    printf("Os ponteiro1 é maior, ponteiro1 = %d e edereço do ponteiro1 = %p \n", valor1, ponteiro1);
  }else if (ponteiro1 < ponteiro2){
    //se o ponteiro 2 tiver o enderço maior, exibir o conteúdo que ele contém e o endereço
    printf("Os ponteiro2 é maior, ponteiro2 = %d e edereço do ponteiro2 = %p \n", valor2, ponteiro2);
  }else{
    //se os ponteiros forem iguais, exibir o conteúdo que ele contém e o endereço de cada um
    printf("Os ponteiro1 é maior, ponteiro1 = %d e edereço do ponteiro1 = %p \n", valor1, ponteiro1);
    printf("Os ponteiro1 é maior, ponteiro1 = %d e edereço do ponteiro1 = %p \n", valor2, ponteiro2);
  }// else
return 0;
}//main
