//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função que converte um número decimal em número binário
int convert_binario(int decimal){
  int n;
  if(decimal/2 != 0){//chamada recursiva
    n = decimal/2;
    convert_binario(n);
    printf("%d",decimal%2);
  }else{//caso base
    printf("%i", decimal%2);
  }//else
}//função convert_binario

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//chamando função. e exibindo a conversão de decimal para binário
convert_binario(20);
printf("\n");
return 0;
}//main
