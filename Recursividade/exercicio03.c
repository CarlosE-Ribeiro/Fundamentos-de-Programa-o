//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o para fazer a multiplica��o de dois numeros (x,y), que seja equivalente a elevado x^y
int multi_elevado(int n1, int n2){
  if(n2 == 0){//caso base
   return 1;
 }else{//chamada recursiva
   return n1 * multi_elevado(n1, n2 - 1);
 }//else
}//fun��o multi_elevado

//fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int elevado;
//chamando fun��o exibindo numero x elevado a y
elevado = multi_elevado(2,4);
printf("O n�mero elavado fica: %i\n", elevado);
return 0;
}//main
