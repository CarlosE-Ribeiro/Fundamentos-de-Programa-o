//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontua��es
   int termos, a = 0, b = 1, soma; // variaveis para realizar a sequencia

    printf("Digite o n�mero de termo que voc� deseja da sequ�ncia Fibonacci:"); // pedindo para o usuario entrar com os numeros de termos que deseja ver
    scanf("%i",&termos); // armazenando o numero de termos desejados
  for ( int contador = 1; contador <= termos; contador ++) {// condi��o para etrar em looping

    soma = a + b; // para fazer a conta da sequencia
    printf("O %i termo �: %i\n",contador ,soma); // mostrar os termos
    b = a; // assim a variavel toma o termo anterior do anterior
    a = soma; // a assumindo o valor do antecessor do numero somado

  } // for
   return 0;
 } // main
