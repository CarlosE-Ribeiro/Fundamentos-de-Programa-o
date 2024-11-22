//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//funcão para mostar o numero de fibonacci de acordo com a sua ordem
int fibonacci(int nsequencia){
    if(nsequencia == 1 || nsequencia == 2 ){//caso base
      return 1;
    }else{//chamada recursiva
      return fibonacci(nsequencia - 1) + fibonacci(nsequencia - 2);
    }//else
}//fatorial

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int enesimo_fibo;
//chamando a função e exibindo o enésimo da sequência  de Fibonacci
enesimo_fibo = fibonacci(5);
printf("%i\n", enesimo_fibo);
return 0;
}//main
