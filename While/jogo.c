#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

int main () {
  setlocale(LC_ALL, "");
 int tentativa = 0, randon, valor;
 srand((unsigned)time(NULL)); //limba o valor randon anterior para exibir um novo

printf("-----Bem - vindo ao jogo RANDON-----\n\n");
printf(" 1° - O computador gerou um valor de 1 a 100\n");
printf(" 2° - tente acertar o número\n");
printf(" 3° - você terá só 6 tentativas\n");
randon = rand()%100; //aqui é gerando um valor aleatorio pelo pc ate 100

  while (tentativa < 6 && valor != randon) { // while
    printf("digite sua tentativa:\n"); // pede pro usuario
    scanf("%i",&valor ); //armazena o valor do usuario
    if (valor > randon) { // abrindo a condição para dar dicas se o valor digitado for maior
      printf("valor muito alto\n");// mostrar o valor digitado for maior
    }  else if ( valor < randon) {// abrindo a condição para dar dicas se o valor digitado for menor
      printf("valor muito baixo\n");// mostrar se o valor digitado for menor
    } else
      printf ("Parabéns,você acertou!!\n"); // mensagem que exibe se o usuário acertar 
    tentativa ++;
  }

  printf("O valor randon era: %i\n", randon); //  apresenta o randon escolhido pelo programa
      return 0;
    }
