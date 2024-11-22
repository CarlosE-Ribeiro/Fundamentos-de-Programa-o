#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*Elabore um programa no qual o usu�rio informe o nome de um arquivo texto e uma palavra, e o programa informe o
n�mero de vezes que aquela palavra aparece*/

//fun��o main
int main(){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
char nome[20];
char palavra[20];
char receber;
int contador = 0;
int cont_palavras = 0;
int prox_letra = 0;

//pedindo para o usu�rio entrar com o nome do arquivo que ser� analisado
printf("Insira o nome do arquivo que deseja analisar: \n");
fgets(nome,20,stdin);
nome[strcspn(nome, "\n")] = '\0';
fflush(stdin);
//declarando e abrindo arquivo para leitura
FILE *arquivo = fopen(nome, "r");
//pedindo para o us�ario entrar com a palavra que ele deseja saber quantas vezes ela se repete no arquivo
printf("Insira a palavra que deseja a contada: \n");
fgets(palavra,20,stdin);
palavra[strcspn(palavra, "\n")]= '\0';
fflush(stdin);

//la�o de repeti��o que verifica todos caracteres do arquivo e verem se s�o iguais
while((receber = fgetc(arquivo)) != EOF){
  if(toupper(receber) == toupper(palavra[prox_letra])){
    //se inialmente for iguais ele v�o para o pr�ximo caracter, casa n�o, cai no else e retomo o processo
    contador ++;
    prox_letra ++;
  }else{
    contador  = 0;
    prox_letra = 0;
  }//else
//se a palavra for igual, vai reiniciar para a pr�xima
  if(contador == strlen(palavra)){
    cont_palavras ++;
    contador = 0;
  }//if
}//while
//exibindo a quantidade de vezes que a palavra se repete no arquivo
printf("A palavra %s aparece %i vez nesse arquivo\n\n", palavra, cont_palavras);
return 0;
}//main
