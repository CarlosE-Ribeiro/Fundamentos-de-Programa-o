#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
 char nome[20];
 char curso[20];
 float nota[4];
} aluno;//struct

// esquema para limpa buffer
void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer


int main (){//main
  // para usar pontuações
setlocale(LC_ALL, "");

aluno aluno;
int i =0;
float soma =0, media =0;
//pedindo pro usuario entrar com o nome e armazenando
printf("Dgite o nome do aluno:");
fgets(aluno.nome, 20, stdin);
limpar_buffer(); // limpar o lixo
aluno.nome[strcspn(aluno.nome, "\n")] = '\0'; // troca \n por \0
// pedindo pro usuario entrar com o curso e armazenando
printf("Dgite o curso que o aluno pertence:");
fgets(aluno.curso, 20, stdin);
limpar_buffer(); // limpar o lixo
aluno.curso[strcspn(aluno.curso, "\n")] = '\0'; // troca \n por \0
//pedindo para ele entrar com as 4 notas do alunos, uma de cada vez
for(i =0; i < 4; i++){
  printf("Digite a %i° nota do aluno\n",i+1);
  scanf("%f",&aluno.nota[i]);
  //somando todas as notas que o usuario digita
  soma += aluno.nota[i];
}// for
//calculando media do aluno
media = soma / 4;
//condicções para saber se o aluno é aprovado, vai para exame ou é reprovado
if(media >= 7){
  //exibir se ele for aprovado
  printf("O %s do curso %s foi aprovado com a media de %.2f\n",aluno.nome, aluno.curso, media);
} else
    if (media >= 3 && media < 7){
      //exibir se ele ficar exame
      printf("O %s do curso %s ficou de exame com a media de %.2f\n",aluno.nome, aluno.curso, media);
    } else {
      //exibir se ele for reprovado
      printf("O %s do curso %s foi reprovado com a media de %.2f\n",aluno.nome, aluno.curso, media);
    }// else

  return 0;
}// main
