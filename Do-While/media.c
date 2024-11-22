//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");
  float media, nota1, nota2; // variaveis para calcular a media
  int cont = 0; //variavel para o loop

  do { // o que irá ser mostrado dentro do loop
    printf("Digita a primeira nota do aluno:\n"); // pedindo para entrar com a primeira nota
    scanf("%f",&nota1); //guardadno a primeira nota
    printf("Digita a segunda nota do aluno:\n");// pedindo para entrar com a segunda nota
    scanf("%f",&nota2);//guardadno a primeira nota

      if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) { //condição para as notas estarem entre 0 a 10

            media = (nota1 + nota2)/2; // euqção para calcular a media
            printf("A media do aluno é: %.2f\n", media); // exibiindo a media
      } else {
        printf("nota inválida, digite a nota do mesmo aluno novamente\n"); //mostar caso a nota não esteja no intervalo entre 0 a 10
        cont --; // decrementa para sempre calcular 5 medias validas
      }//else
cont ++; //incrementando caso as notas sejam validas
} while (cont <5); // condição do loop

    return 0;
  }// main
