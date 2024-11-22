//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função para fazer a multiplicação de dois numeros (x,y), que seja equivalente a elevado x^y
int multi_elevado(int n1, int n2){
  if(n2 == 0){//caso base
   return 1;
 }else{//chamada recursiva
   return n1 * multi_elevado(n1, n2 - 1);
 }//else
}//função multi_elevado

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int elevado;
//chamando função exibindo numero x elevado a y
elevado = multi_elevado(2,4);
printf("O número elavado fica: %i\n", elevado);
return 0;
}//main
