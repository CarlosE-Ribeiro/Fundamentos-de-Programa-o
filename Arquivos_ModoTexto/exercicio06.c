#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma palavra, e o programa informe o
número de vezes que aquela palavra aparece*/

//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
char nome[20];
char palavra[20];
char receber;
int contador = 0;
int cont_palavras = 0;
int prox_letra = 0;

//pedindo para o usuário entrar com o nome do arquivo que será analisado
printf("Insira o nome do arquivo que deseja analisar: \n");
fgets(nome,20,stdin);
nome[strcspn(nome, "\n")] = '\0';
fflush(stdin);
//declarando e abrindo arquivo para leitura
FILE *arquivo = fopen(nome, "r");
//pedindo para o usúario entrar com a palavra que ele deseja saber quantas vezes ela se repete no arquivo
printf("Insira a palavra que deseja a contada: \n");
fgets(palavra,20,stdin);
palavra[strcspn(palavra, "\n")]= '\0';
fflush(stdin);

//laço de repetição que verifica todos caracteres do arquivo e verem se são iguais
while((receber = fgetc(arquivo)) != EOF){
  if(toupper(receber) == toupper(palavra[prox_letra])){
    //se inialmente for iguais ele vão para o próximo caracter, casa não, cai no else e retomo o processo
    contador ++;
    prox_letra ++;
  }else{
    contador  = 0;
    prox_letra = 0;
  }//else
//se a palavra for igual, vai reiniciar para a próxima
  if(contador == strlen(palavra)){
    cont_palavras ++;
    contador = 0;
  }//if
}//while
//exibindo a quantidade de vezes que a palavra se repete no arquivo
printf("A palavra %s aparece %i vez nesse arquivo\n\n", palavra, cont_palavras);
return 0;
}//main
