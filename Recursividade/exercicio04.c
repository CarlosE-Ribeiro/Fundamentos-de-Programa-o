//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//func�o para mostar o numero de fibonacci de acordo com a sua ordem
int fibonacci(int nsequencia){
    if(nsequencia == 1 || nsequencia == 2 ){//caso base
      return 1;
    }else{//chamada recursiva
      return fibonacci(nsequencia - 1) + fibonacci(nsequencia - 2);
    }//else
}//fatorial

//fun��o main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int enesimo_fibo;
//chamando a fun��o e exibindo o en�simo da sequ�ncia  de Fibonacci
enesimo_fibo = fibonacci(5);
printf("%i\n", enesimo_fibo);
return 0;
}//main
