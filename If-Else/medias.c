#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

  float media; //variavel para o usuario entrar com a media do aluno

printf("Por favor, insira a media do aluno:\n"); //pedindo entrada da nota do aluno
scanf("%f",&media);

if (media >= 6) { // abrindo condição para saber o futuo do aluno
   printf("Aluno esta aprovado com media: %.2f parabens!\n", media); //será apresentado caso o aluno seja aprovado
}
    else  {
        printf("Infelizmente o aluno foi reprovado com media:%.2f \n", media); //será apresentado caso o aluno seja reprovado
    }

  return 0;
}
