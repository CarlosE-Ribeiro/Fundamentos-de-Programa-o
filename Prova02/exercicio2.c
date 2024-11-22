//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//estrutura de dados da pesssoa
typedef struct{
  char nome[30];
  char profissao[20];
  char sexo;
  long int nascimento;
} dados_das_pessoas;
//função para preencher os dados de cada pessoa
void preenchimento(dados_das_pessoas *dpessoas){
for( int i =0; i < 5; i++){
  printf("Digite o nome:\n");
  fgets(dpessoas[i].nome, 30, stdin);
  dpessoas[i].nome[strcspn(dpessoas[i].nome, "\n")] = '\0'; // troca \n por \0
  fflush(stdin);
  printf("Digite a profissao:\n");
  fgets(dpessoas[i].profissao, 20, stdin);
  dpessoas[i].profissao[strcspn(dpessoas[i].profissao, "\n")] = '\0'; // troca \n por \0
  fflush(stdin);
  printf("Digite o sexo 'm'(masculino) ou 'f'(feminino)\n");
  scanf("%c",&dpessoas[i].sexo);
  printf("Digite a data de nascimento\n");
  scanf("%li",&dpessoas[i].nascimento);
  printf("\n\n-----------------------------------------------------\n\n");
  fflush(stdin);
    }//for
}//preenchimento
//funcção para mudar as primeiras letras de cada entrada do nome para maiusculas, caso ele entre com minusculas
void mudanca (dados_das_pessoas *dpessoas){
printf("Frase1\n");

for(int i = 0; i < 5; i++){

  strlwr(dpessoas[i].nome);

  for (int j = 0; j < strlen(dpessoas[i].nome) + 1; j++) {
      if (j == 0 || dpessoas[i].nome[j - 1] == ' ')
          dpessoas[i].nome[j] = toupper(dpessoas[i].nome[j]);
      else
         dpessoas[i].nome[j] = dpessoas[i].nome[j];

         printf("Frase: %s\n", dpessoas[i].nome[j]);
         printf("Frase2\n");
    }//f2
  }//f1
printf("Frase3\n");
}//mudanca

void analise(dados_das_pessoas *dpessoas){
//para rodar todos os nomes
for(int = 0; i < 5; i++){
  //se  pessoa for maior de 60 e sexo masculino, vacinado
  if(dpessoas[i].nascimento > 1961 && strcasecmp(dpessoas[i].nome, "m") == 0){
    strcat (dpessoas[i].nome, "vacinado");
    printf("Em formato americano o nome fica: %s\n", dpessoas[i].nome);
    //se  pessoa for maior de 60 e sexo feminino, vacinada
  if(dpessoas[i].nascimento > 1961 && strcasecmp(dpessoas[i].nome, "f") == 0){
    strcat (dpessoas[i].nome, "vacinada");
    printf("Em formato americano o nome fica: %s\n", dpessoas[i].nome);
     } // segundo if
   }// primeiro if
 }//for
}//analise

void pmvelha(ados_das_pessoas *dpessoas){

int maisvelha[30];

if(dpessoas[i].nascimento > 0)

maisvelha =

}pmvelha



//funçã main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variaveis
dados_das_pessoas dpessoas[5];
int n;
//chamando função
preenchimento (dpessoas);
mudanca (dpessoas);
return 0;
}//main
