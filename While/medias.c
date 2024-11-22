#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Fa�a um programa que calcule a m�dia para 5 alunos, sendo que cada aluno tem 2 notas (reais).
 O programa somente dever� aceitar notas no intervalo fechado de 0 a 10, solicitando nova digita��o quando necess�rio.*/

int main () {
  setlocale(LC_ALL, "");

  int rep = 5; // variavel para o loop
  float nota1, nota2, media; // variaveis para calcular a media

  while ( rep > 0) { // abrindo o loop para ser execitado 5 vezes

    printf("Digite a primeira nota do aluno:\n"); // pedindo primeira nota
    scanf("%f",&nota1); // arma prime nota
    printf("Digite a segunda nota do aluno\n"); // pedindo segunda nota
    scanf("%f",&nota2); // armaenando segunda nota

    if (nota1 >= 0 && nota2 >= 0 && nota1 < 10 && nota2 < 10) { //condic�o para as notas estarem no intervalo entre 0 e 10
      media = (nota1 + nota2)/2; // euq��o para calcular a media
      printf("A media do �: %.2f\n", media); // mostrando a media do aluno
    }else {
      printf("Essa nota N�O existe... tente novamente\n"); // caso n�o exista a nota, vai peir outros valores
      rep ++;// para incremntar +1 caso de erro e assim continuar com 5 medias
    } // else
     rep --; // decrementar para mostar somente 5 medias
  } // while
    return 0;
  } // main
