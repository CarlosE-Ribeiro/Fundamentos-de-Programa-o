//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o para fazer a soma de dois numeros, que seja equivalente a multiplica��o de ambos
int soma_multi(int n1, int n2){
  if(n1 == 0){//caso base
    return 0;
  }else{//chamada recursiva
    printf("%i soma : %i\n",n1, n1 + n2);
    return n2 + soma_multi(n1-1, n2);
  }//else
}//soma

//fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int multiplicacao;
//chamando a fun��o exibindo o valor da multiplica��o
multiplicacao = soma_multi(3,7);
printf("O resultado da multiplica��o �: %i \n", multiplicacao);

return 0;
}//main
